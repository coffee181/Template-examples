#include<iostream>
using namespace std;

template<typename T>//����һ��ģ��,T��ͨ�õ���������
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	//����ģ��
	//1.�Զ������Ƶ�
	//myswap(a, b);
	//2.ָ������
	myswap<int>(a, b);

	cout << a << "  " << b << endl;
	return 0;
}