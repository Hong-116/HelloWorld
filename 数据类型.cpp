#include <iostream>
using namespace std;

/*
	short 2字节(-2^15~2^15-1)
	int 4字节(-2^31~2^31-1)
	long Windows（4字节），Linux（32位4字节，64位8字节）
	long long 8字节
*/

/*
	sizeof关键字统计数据类型内存大小
	语法：sizeof(数据类型/变量)
	short < int <= long <= long long
*/

/*
	字符型 char ch = 'a';
	字符型变量只占用1字符
	存储时是将ASCII编码放入存储单元
*/

int main()
{
	short num1 = 10; //(-32768~32767)
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	cout << "short占用内存为" << sizeof(num1) << endl;

	// 字符型变量创建
	char ch = 'a';
	cout << ch << endl;

	// 字符型变量占用内存大小
	cout << sizeof(ch) << endl;

	// 字符型变量常见错误：用单引号，只能有一个字符

	// 字符型变量对应ASCII编码:a(97),A(65)
	cout << int(ch) << endl;

	system("pause");
	return 0;
}