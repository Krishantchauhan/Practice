#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>

// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define loop(n) for (int i = 0; i < n; i++)
#define loop2(n) for (int i = n - 1; i >= 0; i--)

ll ct = 0;
ll low = 0, high = 0;
ll n, k;
ll N;
int flag = 1;
ll sum = 0;
map<ll, ll> mp;

void Weird_Algorithm()
{
    cin >> n;
    cout << n << " ";

    while (n > 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = (n * 3) + 1;
        cout << n << " ";
    }
}

void Missing_Number()
{
    cin >> n;

    ll a[n - 1];
    loop(n - 1)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 0)
        {
            cout << i;
            break;
        }
    }
}

void Repetitions()
{
    ll mx = 1;
    string s;
    cin >> s;
    n = s.length();
    ct = 1;

    for (int i = 1; i <= n; i++)
    {
        if (s[i] == s[i - 1])
            ct++;
        else
        {
            mx = max(mx, ct);
            ct = 1;
        }
    }
    cout << mx;
}

void Increasing_Array()
{
    cin >> n;
    ll a[n];

    loop(n)
            cin >>
        a[i];

    ll diff = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            ct = ct + abs(a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }

    cout << ct;
}

void per()
{
    cin >> n;

    vector<int> ans;
    if (n == 1)
        cout << "1";
    else if (n <= 3 && n != 1)
        cout << "NO SOLUTION";
    else
    {
        for (int i = 2; i <= n; i += 2)
            ans.push_back(i);

        for (int i = 1; i <= n; i += 2)
            ans.push_back(i);

        loop(ans.size())
                cout
            << ans[i] << " ";
    }
}

int main()
{
    // Weird_Algorithm();
    // Missing_Number();
    // Repetitions();
    // Increasing_Array();
    per();

    return 0;
}