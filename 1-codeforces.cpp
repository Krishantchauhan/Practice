// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// #include <map>
// #include <unordered_map>
// #include <queue>
// #include <set>

#include <bits/stdc++.h>
using ll = long long;

#define loop(n) for (ll i = 0; i < n; i++)
#define loop2(n) for (ll i = n - 1; i >= 0; i--)

ll ct = 0;
ll low = 0, high = 0;
ll n, k;
ll N;
int flag = 0;
ll sum = 0;

using namespace std;

void Sorting_with_Twos()
{
    ll first;
    cin >> n >> first;

    ll temp;
    flag = 0;
    for (ll i = 1; i < n; i++)
    {
        cin >> temp;
        if (first > temp)
        {
            if (((i - 1) & i) != 0)
                flag = -1;
        }
        first = temp;
    }

    if (flag)
        cout << "NO"
             << "\n";
    else
        cout << "YES"
             << "\n";
}

void Deja_Vu()
{
    int n, q;
    cin >> n >> q;

    vector<int> ans(n), a;

    loop(n)
            cin >>
        ans[i];

    loop(q)
    {
        int temp;
        cin >> temp;

        if (a.empty() || a.back() > temp)
            a.push_back(temp);
    }

    loop(n)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (ans[i] % (1 << a[j]) == 0)
                ans[i] |= 1 << (a[j] - 1);
        }
    }

    loop(n)
            cout
        << ans[i] << " ";

    cout << "\n";
}

void Smilo_and_Monsters()
{
    ll n, temp = 0, x = 0, mn = 0;
    sum = 0;
    cin >> n;
    vector<ll> ans(n);

    loop(n)
    {
        cin >> ans[i];
        sum += ans[i];
    }

    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());

    mn = sum;

    loop(n)
    {
        temp += ans[i];
        sum -= ans[i];
        if (temp > sum)
        {
            x = temp - sum;
            x = (x + 1) / 2;
        }
        ll res = sum + x;
        mn = min(mn, i + 1 + res);
        x = 0;
    }

    cout << mn << "\n";
}

int main()
{

    cin >> N;
    while (N--)
    {
        // Sorting_with_Twos();
        // Deja_Vu();
        Smilo_and_Monsters();
    }
    return 0;
}