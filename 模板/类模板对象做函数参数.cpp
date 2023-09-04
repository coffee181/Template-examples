#include<iostream>
using namespace std;
#include<string>
//类模板实例化出的对象，向函数传参的方式
//1.指定传入类型---直接显示对象的数据类型
//2.参数模板化-----将对象中的参数变为模板进行传递
//3.整个类模板化---将这个对象类型 模板化进行传递

//类模板
template<class T1,class T2 >
class Person {
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerosn()
	{
		cout << "name:" << this->m_Name <<"  " << "age:" << this->m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;
	
};
//1.指定传入类型---最常用
void printPerson1(Person<string, int>&p)
{
	p.showPerosn();
}
void test01()
{
	Person<string, int>p("monkey", 100);
	printPerson1(p);
}

//2.参数模板化
template<class T1,class T2>
void printPerson2(Person<T1 ,T2>& p)
{
	p.showPerosn();
	cout << "T1's type: " << typeid(T1).name() << endl;
	cout << "T2's type: " << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int>p("pig", 90);
	printPerson2(p);
}
//3.整个类模板化
template<class T>
void printPerson3(T &p)
{
	p.showPerosn();
	cout << "T's type: " << typeid(T).name() << endl;

}
void test03()
{
	Person<string, int>p("justin", 30);
	printPerson3(p);
}

int main()
{
	test01();
	test02();
	test03();
	return 0;
}