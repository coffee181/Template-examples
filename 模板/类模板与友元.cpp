#include<iostream>
using namespace std;
#include<string>
//全局函数类内实现--直接在类内声明友元即可
//全局函数类外实现--需要提前让编译器知道全局函数的存在

//提前声明类和类外实现
template<class T1, class T2>
class Person;

template<class T1, class T2>
void PrintPerson(Person<T1, T2> p)
{

	cout << " outing---name: " << p.m_Name << "  " << "outing--age: " << p.m_Age << endl;

}

template<class T1,class T2>
class Person
{
	//全局函数,类内实现
	friend void printPerson(Person<T1,T2> p)
	{
		cout << "name: " << p.m_Name << "  " << "age: " << p.m_Age << endl;
	}
	//全局函数类外实现
	//friend void PrintPerson(Person<T1, T2> p);//普通函数声明
	//全局函数类外实现--需要提前让编译器知道全局函数的存在
	friend void PrintPerson<>(Person<T1, T2> p);//加个空模板函数列表
	
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	
private:
	T1 m_Name;
	T2 m_Age;
};
////类外实现--全局函数不需要作用域
//template<class T1,class T2>
//void PrintPerson(Person<T1, T2> p)
//{
//	
//		cout << " outing---name: " << p.m_Name << "  " << "outing--age: " << p.m_Age << endl;
//	
//}
void test01()
{
	Person<string, int>p("Tom", 20);
	printPerson(p);
}
void test02()
{
	Person<string, int>p("Jerry", 20);
	PrintPerson(p);
}
int main()
{
	test01();
	test02();
	return 0;
}