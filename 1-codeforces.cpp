#include <iostream>
// #include <algorithm>
#include <map>

// #include <bits/stdc++.h>
using ll = long long;

#define loop(n) for (int i = 0; i < n; i++)

ll ct = 0;
ll low = 0, high = 0;
ll n, k;
ll N;
int flag = 1;
ll sum = 0;

using namespace std;

void ptr(ll arr[], ll low, ll high)
{
    ct = 0;
    while (low < high)
    {
        while (arr[low] == 0 && low < high)
            low++;
        while (arr[high] == 1 && high > (low + high) / 2)
            high--;
        if (low < high)
        {
            ct++;
            swap(arr[low], arr[high]);
        }
    }
    cout << ct;
}

void Sum_of_Three(ll n)
{
    if (n <= 6)
        cout << "NO" << endl;
    else
    {
        int a = 1;
        int b = 2;
        int c = n - a - b;
        if (c % 3 == 0)
        {
            b += 2;
            c -= 2;
        }
        if (c <= b)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
    }
}

int main()
{

    cin >> N;
    while (N--)
    {
        cin >> n;

        ll arr[n], b[n];

        // for (ll i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        //     sum += abs(arr[i]);
        //     b[i] = arr[i];
        // }
        // cin>>k;

        // sort(arr, arr + n);

        // ptr(arr, 0, n - 1);
        // Sum_of_Three(n);

        loop(5)
        {
            cout << i;
        }

        cout << endl;
    }
    return 0;
}