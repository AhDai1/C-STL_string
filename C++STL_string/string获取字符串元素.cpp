#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
/*
	�±������ [] ��ʹ��ʱ�������������Ч�ԣ�����±곬���ַ��ĳ��ȷ�Χ����ʾ����δ������Ϊ��
	���ڳ����ַ�����ʹ���±������ʱ���ַ���������ַ����� '\0'������Ч�ġ�
	��Ӧ string ���Ͷ��󣨳����ͣ����һ���ַ����±�����Ч�ģ����÷����ַ� '\0'��

	���� at() ��ʹ��ʱ�����±��Ƿ���Ч������������±곬���ַ��ĳ��ȷ�Χ��ϵͳ���׳� out_of_range �쳣��
*/
	string str("abcde");
	char temp = str[2];
	char temp_1 = str.at(2);
	//char temp_2 = str[str.length];//ָ��'\0',����
	//char temp_3 = str.at(str.length);//�쳣
	cout << temp << temp_1 <<  endl;
	cout << "-----------------------" << endl;
	/*�±������[] �ͺ��� at() �������ַ��ġ����á�*/
	cout << str << endl;
	char &r = str[2];
	char *p = &str[3];
	r = 'X';
	*p = 'Y';
	cout << str << endl;

	str = "123456";//���ַ����޸��Ժ�ԭ�������ù�ϵh���ǿ��Ըı��ַ�����ֵ
	r = 'X';
	*p = 'Y';
	cout << str << endl;

	return 0;
}
