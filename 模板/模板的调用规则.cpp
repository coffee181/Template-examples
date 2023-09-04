#include<iostream>
using namespace std;
 /*
 1.如果函数模板和普通函数都可以调用，优先调用普通函数
 2.可以通过空模板参数列表 强制调用 函数模板
 3.函数模板可以发生函数重载
 4.如果函数模板可以产生更好的匹配，优先调用函数模板
 */
void myprint(int a, int b)
{
	cout << "调用普通函数" << endl;
}
template<class T>
void myprint(T a, T b)
{
	cout << "调用的模板" << endl;
}
template<class T>  
void myprint(T a, T b,T c)// 3.函数模板可以发生函数重载
{
	cout << "调用的重载的模板" << endl;
}
void test1()
{
	int a = 10;
	int b = 20;
	myprint(a, b);  //1.优先调用的普通函数
	myprint<>(a, b);//2.强制调用 函数模板
	myprint(a, b, 100);
	char c1='c1';
	char c2 = 'c2';
	myprint(c1, c2); //4.调用模板不需要隐式转换
}

int main()
{  
	test1();
	return 0;
}