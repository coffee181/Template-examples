#include<iostream>
using namespace std;
#include<string>
//#include"Person.cpp"//1.ֱ�Ӱ���Դ�ļ� 
#include"Person.hpp"
//��ģ���г�Ա�����Ĵ���ʱ�����ڵ��ý׶Σ����·��ļ���д���Ӳ��� ---1.����cpp/2.��.h��.cpp����һ����Ϊhpp
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
////����ʵ��
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