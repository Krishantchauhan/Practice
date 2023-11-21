#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <u/NSItemProvider+SWCollaborationMetadata.h>/

#include <queue>
#include <set>

using namespace std;
using ll = long long;

#define loop(n) for (int i = 0; i < n; i++)
#define loopj(n) for (int j = 0; j < n; j++)
#define loop2(n) for (int i = n - 1; i >= 0; i--)

const int MOD = 1000000007;

void A()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ct = 0, sum = 0;
    loop(n)
    {
        if (s[i] == '?')
            ct++;
        else
            sum = sum + (s[i] - '0');
    }
    if (s[0] == '?')
    {
        cout << 1;
        ct--;
        while (ct--)
            cout << 0;
        cout << "\n";
    }
    else
    {
        if (ct > 0)
        {
            sum = sum % 9;
            if (sum == 0)
            {
                ct--;
                while (ct--)
                    cout << 1;
                cout << 2 << "\n";
            }
            else
            {
                while (ct--)
                    cout << 1;
                cout << "\n";
            }
        }
        else
        {
            if (sum % 9)
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
        }
    }
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