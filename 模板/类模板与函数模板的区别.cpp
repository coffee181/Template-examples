#include<iostream>
using namespace std;
#include<string>
//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//2.��ģ����ģ��Ĳ����б��п�����Ĭ�ϲ���

//��ģ��
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
//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test01()
{
	//Person p("�����", 1000);�����������޷��Լ��Ƶ�
	Person<string, int>p("�����", 1000);
	p.ShowPerson();
}
//2.��ģ����ģ��Ĳ����б��п�����Ĭ�ϲ���
void test02()
{
	Person<string>p("��˽�", 999);
}
int main()
{
	test01();
	test01();
	return 0;
}