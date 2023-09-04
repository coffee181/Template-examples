#include<iostream>
using namespace std;
#include<string>
//普通类中的成员函数一开始就可以创建
//类模板中的成员函数在调用时才可以创建

class Person1 {
public:
	void showPerson1()
	{
		cout << "person1's show" << endl;
	}
};
class Person2{
public:
	void showPerson2()
	{
		cout << "person2's show" << endl;
	}
};
//类模板
template<class T>
class MyClass
{
public:
	T obj;

   //类模板中的成员函数---调用才会创建，因为不知道obj是什么类型的
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	MyClass<Person1>m;
	m.func1();
	//m.func2();报错 m是Person1的类型

}
int main()
{
	test01();
	return 0;
}