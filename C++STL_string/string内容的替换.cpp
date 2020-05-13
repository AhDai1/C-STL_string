#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

/*
	basic_string& replace (size_type p0, size_type n0, const E * s); //ʹ���ַ��� s �ַ�����Դ����λ�� P0 ����ʼ�滻Դ��n���ַ�
	basic_string& replace (size_type p0, size_type n0, const E *s, size_type n); //ʹ���ַ��� s �е� n ���ַ�����Դ����λ�� P0 ����ʼ�滻 1 ���ַ�
	basic_string& replace (size_type p0, size_type n0, const basic_string& str); //ʹ���ַ��� s �е� n ���ַ�����Դ����λ�� P0 ����ʼ�滻
	basic_string& replace (size_type p0, size_type n0, const basic_string& str, size_type pos, size_type n); //ʹ�ô� str ���Ӵ� str [pos, pos + n-1] �滻Դ���е����ݣ���λ�� p0 ����ʼ�滻���滻�ַ� n0 ��
	basic_string& replace (size_type p0, size_type n0, size_type n, E c); //ʹ�� n ���ַ� 'c' �滻Դ����λ�� p0 ����ʼ�� n0 ���ַ�
	basic_string& replace (iterator first0, iterator last0, const E * s);//ʹ�õ������滻���� 1) �÷�����
	basic_string& replace (iterator first0, iterator last0, const E * s, size_type n);//�� 2) ����
	basic_string& replace (iterator first0, iterator last0, const basic_string& str); //�� 3) ����
	basic_string& replace (iterator first0, iterator last0, size_type n, E c); //�� 5) ����
	basic_string& replace (iterator first0, iterator last0, const_iterator first, const_iterator last); //ʹ�õ������滻
*/

	string var("abcdefghijklmn");
	const string dest("1234");
	string dest2("567891234");
	var.replace(3, 2, dest);
	cout << var << endl;

	var = "abcdefghijklmn";
	var.replace(3, 1, dest.c_str(), 1, 3);
	cout << var << endl;

	var = "abcdefghijklmn";
	var.replace(3, 1, 5, 'X');
	cout << var << endl;

	var = "abcdefghijklmn";
	string::iterator itA = var.begin();
	string::iterator itB = var.end();
	var.replace(itA, itB, dest);
	cout << var << endl;

	var = "abcdefghijklmn";
	string::iterator itC, itD;
	itA = var.begin();
	itB = var.end();
	itC = dest2.begin() + 1;
	itD = dest2.end();
	var = "abcdefghijklmn";
	var.replace(itA, itB, itC, itD);
	cout << var << endl;

	var = "abcdefghijklmn";
	var.replace(3, 1, dest.c_str(), 4); //���ַ�ʽ���޶��ַ����滻����󳤶�
	cout <<  var << endl;

	return 0;
}
