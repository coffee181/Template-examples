#include<iostream>
using namespace std;
#include<string>
//1.类模板没有自动类型推导的使用方式
//2.类模板再模板的参数列表中可以有默认参数

//类模板
template<class NameType,class AgeType=int>
class Person {
public:
	Person(NameType name,AgeType age)
	{
		this->m_Name = name;
		this->m_Age =age
	}
	void ShowPerson()
	{
		cout << "name:" << this->m_Name << "age:" << this->m_Age << endl;
	}
private:
	NameType m_Name;
	AgeType m_Age;
};
//1.类模板没有自动类型推导的使用方式
void test01()
{
	//Person p("孙悟空", 1000);报错，编译器无法自己推导
	Person<string, int>p("孙悟空", 1000);
	p.ShowPerson();
}
//2.类模板再模板的参数列表中可以有默认参数
void test02()
{
	Person<string>p("猪八戒", 999);
}
int main()
{
	test01();
	test01();
	return 0;
}