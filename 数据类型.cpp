#include <iostream>
using namespace std;

/*
	short 2�ֽ�(-2^15~2^15-1)
	int 4�ֽ�(-2^31~2^31-1)
	long Windows��4�ֽڣ���Linux��32λ4�ֽڣ�64λ8�ֽڣ�
	long long 8�ֽ�
*/

/*
	sizeof�ؼ���ͳ�����������ڴ��С
	�﷨��sizeof(��������/����)
	short < int <= long <= long long
*/

/*
	�ַ��� char ch = 'a';
	�ַ��ͱ���ֻռ��1�ַ�
	�洢ʱ�ǽ�ASCII�������洢��Ԫ
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

	cout << "shortռ���ڴ�Ϊ" << sizeof(num1) << endl;

	// �ַ��ͱ�������
	char ch = 'a';
	cout << ch << endl;

	// �ַ��ͱ���ռ���ڴ��С
	cout << sizeof(ch) << endl;

	// �ַ��ͱ������������õ����ţ�ֻ����һ���ַ�

	// �ַ��ͱ�����ӦASCII����:a(97),A(65)
	cout << int(ch) << endl;

	system("pause");
	return 0;
}