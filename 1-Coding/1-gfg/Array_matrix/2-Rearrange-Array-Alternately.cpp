void rearrange(long long *arr, int n)
{

	// Your code here

	int low = 0, high = n - 1;
	int s = 0;
	int *a = new int[100000];

	while (low <= high)
	{
		a[s++] = arr[high];
		a[s++] = arr[low];
		high--;
		low++;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = a[i];
	}
}