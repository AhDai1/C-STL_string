#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
/*
	size() �� length()�������������᷵�� string ���Ͷ����е��ַ������������ǵ�ִ��Ч����ͬ��
	max_size()��max_size() �������� string ���Ͷ������������ַ�����
	һ������ʹ�ó��ȳ��� max_size() �� string �������������ᒁ�� length_error �쳣��
	capacity()���ú������������·����ڴ�֮ǰ��string ���Ͷ������ܰ���������ַ�����
*/
	int size = 0;
	int length = 0;
	unsigned long maxsize = 0;
	int capacity = 0;
	string str("12345678");
	string str_custom;
	str_custom = str;
	str_custom.reserve(5);//�޸�����
	str_custom.resize(5);
	size = str_custom.size();
	length = str_custom.length();
	maxsize = str_custom.max_size();
	capacity = str_custom.capacity();
	cout << str_custom << endl;
	cout << "size = " << size << endl;
	cout << "length = " << length << endl;
	cout << "maxsize = " << maxsize << endl;
	cout << "capacity = " << capacity << endl;
	return 0;
}
