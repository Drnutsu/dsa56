template<class T>
void initArr(T* a, int v, int i, int lastIndex){
	//init a ���¤��  v ������Թ�硫�  i �֧ lastInd
	if (i <= lastIndex){
		a[i] = v;
		initArr(a, v, i+1, lastIndex);// recursion
	}
}
int main() {
	const int MAX = 3;
	int a[MAX];
	initArr(a, 5, 0, MAX-1);
	initArr(a, 3, 0, MAX-1); 
}