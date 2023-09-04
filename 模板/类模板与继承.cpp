#include<iostream>
using namespace std;
//子类继承父类的类模板时，子类在声明的时候。要指定父类T的类型--不指定编译器无法给子类分配内存

template<class T>
class Base {
	T m;
};

class son1:public Base<int>// 指定父类T的类型
{

};
//如果想灵活指定父类中T类型，子类也需要变类模板
template<class T1,class T2>
class son2 :public Base<T2>// 指定父类T的类型
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