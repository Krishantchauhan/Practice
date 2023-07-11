#include <stdio.h>

// void insert(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int curr = arr[i];
//         int j = i - 1;
//         while (j >= 0 && curr < arr[j])
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = curr;
//     }
// }

// void selection(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int curr = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[curr] > arr[j])
//                 curr = j;
//         }
//         int temp = arr[i];
//         arr[i] = arr[curr];
//         arr[curr] = temp;
//     }
// }

// void bubble(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j + 1] < arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void selection()
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j + 1] < arr[j])
//                 swap(arr[j], arr[j + 1]);
//         }
//     }
// }

// void merge(int arr[], int low, int mid, int high)
// {
//     int leftSize = mid - low + 1;
//     int rightSize = high - mid;

//     int left[leftSize];
//     int right[rightSize];

//     for (int i = 0; i < leftSize; i++)
//         left[i] = arr[low + i];
//     for (int j = 0; j < rightSize; j++)
//         right[j] = arr[mid + j + 1];

//     int i = 0, j = 0, k = low;

//     while (i < leftSize && j < rightSize)
//     {
//         if (left[i] <= right[j])
//             arr[k++] = left[i++];
//         else
//             arr[k++] = right[j++];
//     }

//     while (i < leftSize)
//         arr[k++] = left[i++];

//     while (j < rightSize)
//         arr[k++] = right[j++];
// }

// void mergeSort(int arr[], int l, int r)
// {
//     if (r > l)
//     {
//         int m = (l + r) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

void swap(int arr[], int curr, int i)
{
    int temp = arr[curr];
    arr[curr] = arr[i];
    arr[i] = temp;
}

int partition(char arr[], int l, int h)
{
    int pivot = arr[h];
    int curr = l - 1;

    for (int i = l; i < h; i++)
    {
        if (arr[i] < pivot)
        {
            curr++;
            swap(arr, i, curr);
        }
    }
    swap(arr, curr + 1, h);
    return curr + 1;
}

void quicksort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pi = partition(arr, l, h);
        quicksort(arr, l, pi - 1);
        quicksort(arr, pi + 1, h);
    }
}

int main()
{
    // int arr[5] = {1, 9, 2, 7, 4};
    char arr[4] = "siya";
    int size = 5;
    // insert(arr, size);
    // selection(arr, size);
    // bubble(arr, size);
    // mergesort(arr, 0, 4);
    quicksort(arr, 0, 4);
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%c ", arr[i]);
    // }
    // printf("%s ", arr);
}
 