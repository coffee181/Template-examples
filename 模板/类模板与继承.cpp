#include<iostream>
using namespace std;
//����̳и������ģ��ʱ��������������ʱ��Ҫָ������T������--��ָ���������޷�����������ڴ�

template<class T>
class Base {
	T m;
};

class son1:public Base<int>// ָ������T������
{

};
//��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
template<class T1,class T2>
class son2 :public Base<T2>// ָ������T������
{
public:
	son2()
	{
		cout << "T1's type is: " << typeid(T1).name() << endl;
		cout << "T1's type is: " << typeid(T2).name() << endl;
	}
	T1 obj;
};
void test01()
{
	son1 s1;
}
void test02() {
	son2<int,char>s2;
}
int main()
{
	test01();
	test02();
	return 0;
}