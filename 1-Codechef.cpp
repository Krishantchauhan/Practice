#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
// #include <unordered_map>
// #include <queue>
#include <set>

using namespace std;
using ll = long long;

#define loop(n) for (int i = 0; i < n; i++)
#define loopj(n) for (int j = 1; j < n; j++)
#define loop2(n) for (int i = n - 1; i >= 0; i--)

void A()
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    ll odd = 0, even = 0;
    loop(n)
    {
        cin >> v[i];
        if (v[i] % 2 != 0)
            odd++;
        else
            even++;
    }

    if (odd % 2 != 0 || even % 2 != 0)
        cout << "-1";
    else
    {
        vector<ll> e, o;
        vector<ll> ans(n, -1);

        for (auto i : v)
        {
            if (i % 2 != 0)
                o.push_back(i);
            else
                e.push_back(i);
        }

        sort(e.begin(), e.end());
        sort(o.begin(), o.end());

        vector<int> o_cnt(odd), e_cnt(even);
        int k = 0;

        for (auto z : o)
        {
            o_cnt[k] = z;
            k += 2;
            if (k >= odd)
                k = 1;
        }

        k = 0;

        for (auto z : e)
        {
            e_cnt[k] = z;
            k += 2;
            if (k >= even)
                k = 1;
        }

        int it = 0;

        for (int z = 0; z < odd; z += 2)
        {
            ans[it] = (o_cnt[z] + o_cnt[z + 1]) / 2;
            ans[it + (n / 2)] = abs(o_cnt[z] - o_cnt[z + 1]) / 2;
            it++;
        }

        for (int z = 0; z < even; z += 2)
        {
            ans[it] = (e_cnt[z] + e_cnt[z + 1]) / 2;
            ans[it + (n / 2)] = abs(e_cnt[z] - e_cnt[z + 1]) / 2;
            it++;
        }

        for (auto i : ans)
            cout << i << " ";
    }
    cout << "\n";
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
