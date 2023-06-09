#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// int coinChange(vector<int> &coins, int amount)
// {
//     // sort(coins.begin(), coins.end(), [&](const int a, const int b) {
//     //     return a > b;
//     // });
//     sort(coins.begin(), coins.end(), greater<int>());

//     int ct = 0;
//     for (int i = 0; i < coins.size(); i++)
//     {
//         if (coins[i] <= amount)
//         {
//             while (coins[i] <= amount)
//             {
//                 ct++;
//                 amount -= coins[i];
//                 printf("AMOUNT :- %d and coins :- %d  ct:- %d \n",amount,coins[i],ct);
//             }
//         }
//     }

//     if (amount == 0)
//         return ct;
//     else
//         return -1;
// }

int coinChange(vector<int>& coins, int amount) {
    sort(coins.begin(), coins.end(), greater<int>());

    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < coins.size(); j++) {
            if (coins[j] <= i) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    if (dp[amount] == amount + 1) {
        return -1; // No valid combination of coins
    } else {
        return dp[amount];
    }
}


int main()
{
    // vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200};
    vector<int> coins;
    coins.push_back(3);
    coins.push_back(7);
    coins.push_back(405);
    coins.push_back(436);
    // coins.push_back(20);
    // coins.push_back(50);
    // coins.push_back(100);
    // coins.push_back(200);

    int amount = 8839;

    int result = coinChange(coins, amount);

    cout << "Minimum number of coins required: " << result << endl;

    return 0;
}
