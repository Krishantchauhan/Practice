#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    int arr[n + m];
    int low = 0, high = 0, k = 0;
    while (low < n && high < m)
    {
        if (arr1[low] < arr2[high])
            arr[k++] = arr1[low++];
        else
            arr[k++] = arr2[high++];
    }

    while (low < n)
        arr[k++] = arr1[low++];
    while (high < m)
        arr[k++] = arr2[high++];

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
