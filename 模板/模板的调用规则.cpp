#include<iostream>
using namespace std;
 /*
 1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
 2.����ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
 3.����ģ����Է�����������
 4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
 */
void myprint(int a, int b)
{
	cout << "������ͨ����" << endl;
}
template<class T>
void myprint(T a, T b)
{
	cout << "���õ�ģ��" << endl;
}
template<class T>  
void myprint(T a, T b,T c)// 3.����ģ����Է�����������
{
	cout << "���õ����ص�ģ��" << endl;
}
void test1()
{
	int a = 10;
	int b = 20;
	myprint(a, b);  //1.���ȵ��õ���ͨ����
	myprint<>(a, b);//2.ǿ�Ƶ��� ����ģ��
	myprint(a, b, 100);
	char c1='c1';
	char c2 = 'c2';
	myprint(c1, c2); //4.����ģ�岻��Ҫ��ʽת��
}

int main()
{  
	test1();
	return 0;
}