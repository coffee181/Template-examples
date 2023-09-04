#include<iostream>
using namespace std;
#include<string>
//#include"Person.cpp"//1.直接包含源文件 
#include"Person.hpp"
//类模板中成员函数的创建时机是在调用阶段，导致份文件编写链接不到 ---1.包含cpp/2.把.h和.cpp放在一起作为hpp
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
//
////类外实现
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//template<class T1, class T2>
// void Person<T1, T2>::showPerson()
//{
//	 cout << "name: " << this->m_Name << "  " << "age: " << this->m_Age << endl;
//}

 void test01()
 {
	 Person<string, int> p("jerry", 18);
	 p.showPerson();
 }
int main()
{
	test01();
	return 0;
}