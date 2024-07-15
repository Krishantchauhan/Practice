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
#define loopj(n) for (int j = 1; j < n; j++)
#define loop2(n) for (int i = n - 1; i >= 0; i--)

int check(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void A()
{
    int N;
    cin >> N;
    int ct = 0;
    int atk = 1;
    while (N > 0)
    {
        if (check(N))
        {
            N -= N;
            ct++;
        }
        else
        {
            N -= atk;
            atk *= 2;
            ct++;
        }
        if (N < 0)
        {
            ct = -1;
            break;
        }
    }

    cout << ct << "\n";
}

int main()
{
    int N;
    cin >> N;

    while (N)
    {
        A();
        N--;
    }
    return 0;
}
