#include<iostream>
using namespace std;
//1.自动类型推导必须推导出一直的数据类型T才可以使用
template<class T> //typename 可以替换成 class
void  myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;

}
//2.模板必须要确定出T的数据类型才可以使用
template<class T>
void func()
{
	cout << "func is used" << endl;
}


int main()
{
	int a = 10;
	int b = 20;
	char c = 'a';
	myswap(a, b);
	//myswap(a, c);  报错，两个类型不一样，一个char，一个int，编译器不知道T是什么类型

	//func();报错，没有指定T，运行不了
	func<int>();
	return 0;
}