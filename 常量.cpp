#include <iostream>
using namespace  std;

/*
	1.#define 宏常量
	2.const修饰的变量

	修改常量会报错
*/

#define Day 7

int main()
{
	cout << "一周一共有" << Day << "天" << endl;
	const int month = 12;
	cout << "一年一共有" << month << "月" << endl;
	system("pause");
	return 0;
}