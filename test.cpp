
/**
 * 删除顺序表中的最小元素
 */
bool Del_Min(sqList &L, ElemType &value) {
	if(L.length == 0)  {
		return false
	}

	value = L.data[0];
	int pos = 0;
	for(int i = 1; i< L.length; i++) {
		if(L.data[i] < value) {
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
bool Reverse(sqList &L) {
	Elemtype temp;
	for(int i=0; i<L.length; i++) {
		temp = L.data[i];
		L.data[i] = L.data[L.length -i -1];
		L.data[L.length - i -1] = temp;
	}
}


/**
 * 删除顺序表中的值==X的元素
 */
void Delete_X(sqList &L, ElemType x) {
	for (int i=0; i<L.length; i++) {
		int k = 0;
		if(L.data[i] != x) {
			L.data[k] = L.data[i];
			k++;
		}
		
	}
}


