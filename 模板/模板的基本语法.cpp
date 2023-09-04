#include<iostream>
using namespace std;

template<typename T>//声明一个模板,T是通用的数据类型
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
	//利用模板
	//1.自动类型推导
	//myswap(a, b);
	//2.指定类型
	myswap<int>(a, b);

	cout << a << "  " << b << endl;
	return 0;
}