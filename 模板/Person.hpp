#pragma once
#include<iostream>
using namespace std;
#include<string>

//类模板中成员函数的创建时机是在调用阶段，导致份文件编写链接不到
template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void showPerson();

	T1 m_Name;
	T2 m_Age;
};
//类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "name: " << this->m_Name << "  " << "age: " << this->m_Age << endl;
}
