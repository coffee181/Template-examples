#include<iostream>
using namespace std;
#include<string>
//ȫ�ֺ�������ʵ��--ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ��--��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���

//��ǰ�����������ʵ��
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
	//ȫ�ֺ���,����ʵ��
	friend void printPerson(Person<T1,T2> p)
	{
		cout << "name: " << p.m_Name << "  " << "age: " << p.m_Age << endl;
	}
	//ȫ�ֺ�������ʵ��
	//friend void PrintPerson(Person<T1, T2> p);//��ͨ��������
	//ȫ�ֺ�������ʵ��--��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
	friend void PrintPerson<>(Person<T1, T2> p);//�Ӹ���ģ�庯���б�
	
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
////����ʵ��--ȫ�ֺ�������Ҫ������
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