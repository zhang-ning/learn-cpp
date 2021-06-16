
// 将数组循环左移，可视为将数组逆置， ab => ba,
void Reverse(int R[], int from, int to)
{
	for (int i = 0; i < (to - from + 1) / 2; i++)
	{
		temp = R[i + from];
		R[i + from] = R[to - i];
		R[to - i] = temp;
	}
}

// 循环向左移动3
void Converse(int R[], int n, int p)
{
	// 为什么这里 n 不取 n = R.length ?
	Reverse(R, 0, p - 1);
	Reverse(R, p, n - 1);
	Reverse(R, 0, n - 1);
}
