#include<iostream>
using namespace std;
//1.�Զ������Ƶ������Ƶ���һֱ����������T�ſ���ʹ��
template<class T> //typename �����滻�� class
void  myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;

}
//2.ģ�����Ҫȷ����T���������Ͳſ���ʹ��
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
	//myswap(a, c);  �����������Ͳ�һ����һ��char��һ��int����������֪��T��ʲô����

	//func();����û��ָ��T�����в���
	func<int>();
	return 0;
}