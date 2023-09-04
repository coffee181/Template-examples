#include<iostream>
using namespace std;
#include<string>
//��ģ��ʵ�������Ķ����������εķ�ʽ
//1.ָ����������---ֱ����ʾ�������������
//2.����ģ�廯-----�������еĲ�����Ϊģ����д���
//3.������ģ�廯---������������� ģ�廯���д���

//��ģ��
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
//1.ָ����������---���
void printPerson1(Person<string, int>&p)
{
	p.showPerosn();
}
void test01()
{
	Person<string, int>p("monkey", 100);
	printPerson1(p);
}

//2.����ģ�廯
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
//3.������ģ�廯
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