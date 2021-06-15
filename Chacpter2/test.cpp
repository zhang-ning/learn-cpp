
/**
 * 删除顺序表中的最小元素
 */
bool Del_Min(sqList &L, ElemType &value)
{
	if (L.length == 0)
	{
		return false
	}

	value = L.data[0];
	int pos = 0;
	for (int i = 1; i < L.length; i++)
	{
		if (L.data[i] < value)
		{
			value = L.data[i];
			pos = i;
		}
	}

	L.data[pos] = L.data[L.length - 1];
	L.length--;
	return true
}

/**
 * 顺序表逆序
 */
bool Reverse(sqList &L)
{
	Elemtype temp;
	for (int i = 0; i < L.length; i++)
	{
		temp = L.data[i];
		L.data[i] = L.data[L.length - i - 1];
		L.data[L.length - i - 1] = temp;
	}
}

/**
 * 删除顺序表中的值等于X的元素
 * k 存储的是不等于x的值，k的长度为最终长度
 */
void Delete_X_1(sqList &L, ElemType x)
{
	for (int i = 0; i < L.length; i++)
	{
		int k = 0;
		if (L.data[i] != x)
		{
			L.data[k] = L.data[i];
			k++;
		}
	}
	L.length = k;
}

/**
 * k存储的是等于x的下标，其他则向前移动 i - k 格
 */
void Delete_X_2(sqList &L, ElemType x)
{
	int i = 0, k = 0;
	while (i < L.length)
	{
		if (L.data[i] == x)
			k++ else L.data[i - k] = L.data[i]

						 i++
	}
	L.length = L.length - k
}

/**
  *  删除，s<t 的一段元素
  */
bool Delete_s_t2(sqList &L, ElemType s, ElemType t)
{
	if (s >= t || L.length == 0)
	{
		return false;
	}

	int i, j;

	for (i = 0; i < L.length && L.data[i] < s; i++)
		;

	if (i > L.length)
		return false;

	for (j = i; j < L.length && L.data[j] <= t; j++)
		;

	for (; j < L.length; i++, j++)
	{
		L.data[i] = L.data[j];
	}

	L.length = i;
	return true;
}

/**
 * 非有序顺序表sqList，删除值在s，t之前的数值
 */
bool Delete_s_t3(sqList &L, ElemType s, ElemType t)
{
	int i, j;

	if (s >= t || L.length == 0)
	{
		return false;
	}

	for (i = 0; i < L.length; i++)
	{
		if (L.data[i] >= s && L.data[i] <= t)
			k++ else L.data[i - k] = L.data[i];
	}
	L.length = L.length - k;
	return true;
}

/**
 * 删除有序顺序表中的相同的元素
 * 思路：将第一个元素视为不重复元素的第一个，后面的元素一次比较，不同则 j +1，相同则向前移动
*/
bool Delete_duplicate(sqList &L)
{
	if (L.length == 0)
		return false;

	int i, j;

	for (i = 0, j = 0; j < L.length; j++)
	{
		if (L.data[i] != L.data[j])
		{
			L.data[++i] = L.data[j];
		}
	}
	L.length = i + 1;
	return true;
}

/**
 * 7. 合并两个有序顺序表
 */
bool Merge_s(sqList A, sqList B, sqList C)
{
	if (A.length + B.length > C.maxSize)
	{
		return false;
	}
	int i = 0, j = 0, k = 0;

	while (i < A.length && j < B.length)
	{
		if (A.data[i] < B.data[j])
			C.data[k++] = A.data[i++] else C.data[k++] = B.data[j++]
	}

	while (i < A.length)
	{
		C.data[k++] = A.data[i++]
	}
	while (j < B.length)
	{
		C.data[k++] = B.data[j++]
	}

	C.length = k;
	retrun true;
}
