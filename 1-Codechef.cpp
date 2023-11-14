#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>

using namespace std;
using ll = long long;

#define loop(n) for (int i = 0; i < n; i++)
#define loop2(n) for (int i = n - 1; i >= 0; i--)

// void A()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     ll prod = a * b;

//     ll minut = 24 * 60;

//     ll day = prod / minut;
//     if (prod % minut != 0)
//     {
//         day++;
//     }

//     if (day <= c)
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
//     }
// }

// int main()
// {
//     int N;
//     cin >> N;

//     while(N)
//     {
//         A();
//         N--;
//     }

//     return 0;
// }

// int find_maximum_FX(int N, int K) {
//   int maxValue = -1;
//   int max_X = -1;

//   for (int X = 0; X <= N; X++) {
//     int value = ((N % K) * (X % K)) % K;

//     if (value > maxValue) {
//       maxValue = value;
//       max_X = X;
//     }
//   }

//   return max_X;
// }

// int main() {
//   int T;
//   cin >> T;

//   while(T--){
//     int N, K;
//     cin >> N >> K;

//     int result = find_maximum_FX(N, K);
//     cout << result << endl;
//   }

//   return 0;
// }

// #include <iostream>

// int find_maximum_FX(int N, int K) {
//     int max_value = -1;
//     int max_X = -1;
//     for (int X = 0; X <= N; X++) {
//         int value = (X % K) * ((N - X) % K);
//         if (value > max_value) {
//             max_value = value;
//             max_X = X;
//         }
//     }
//     return max_X;
// }

// int main() {
//     int T;
//     std::cin >> T;

//     for (int i = 0; i < T; i++) {
//         int N, K;
//         std::cin >> N >> K;
//         int result = find_maximum_FX(N, K);
//         std::cout << result << std::endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

void find_maximum_FX(int N, int K)
{
    int max_value = -1;
    int mx = -1;

    loop(N/2+1)
    {
        long long value = (i % K) * ((N - i) % K);
        if (value > max_value)
        {
            max_value = value;
            mx = i;
        }
    }

    cout << mx << "\n";
}

int main()
{
    long long T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        long long N, K;
        cin >> N >> K;
        find_maximum_FX(N, K);
    }

    return 0;
}
