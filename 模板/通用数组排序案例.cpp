#include<iostream>
using namespace std;
//实现一个通用的对数组进行排序的函数，从大到小，选择排序 测试 char数组和int数组
//交换的模板函数
template<class T>
void my_swap(T& a,T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//选择排序的模板函数
template<class T>
void Select_sort(T arr[], int len)
{
	int min;
	for (int i = 0; i < len - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min!= i)
		{
			my_swap<T>(arr[min], arr[i]);
		}
	}
}
//打印数组的模板函数
template<class T>
void print_arr(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
}
int main()
{
	char char_arr[] = "aedafh";
	int len = sizeof(char_arr) / sizeof(char_arr[0]);
	Select_sort<char>(char_arr,len);
	print_arr(char_arr, len);
	cout << endl;
	int int_arr[] = { 1,2,8,95,4,64,4 };
	int len2 = sizeof(int_arr) / sizeof(int_arr[0]);
	Select_sort<int>(int_arr, len2);
	print_arr(int_arr, len2);
	return 0;
}