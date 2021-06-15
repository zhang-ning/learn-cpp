typedef DataType int;

void Reverse(DataType A[], int left, int right, int arraySize)
{
	if (left >= right || right >= arraySize)
	{
		// 参数不符合条件，跳出
		return
	}

	int mid = (left + right) / 2;
	for (int i = 0; i < mid - left; i++)
	{
		int temp = A[left + i];
		A[left + i] = A[right - i];
		A[right - i] = temp;
	}
}

void Exchange(DataType A[], int m, int n, int arraySize)
{
	Reverse(A, 0, ml + n - 1, arraySize);
	Reverse(A, 0, n - 1, arraySize);
	Reverse(A, n, m + n - 1, arraySize);
}
