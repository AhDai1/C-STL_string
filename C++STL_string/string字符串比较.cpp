#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
/*
	int compare (const basic_string& s) const;
	int compare (const Ch* p) const;
	int compare (size_type pos, size_type n, const basic_string& s) const;
	int compare (size_type pos, size_type n, const basic_string& s,size_type pos2, size_type n2) const;
	int compare (size_type pos, size_type n, const Ch* p, size_type = npos) const;
*/
	string A("aBcdef");
	string B("AbcdEf");
	string C("123456");
	string D("123dfg");
	int m = A.compare(B); //������A��B�ıȽ�
	int n = A.compare(1, 5, B, 0, 6); //"Bcdef"��"AbcdEf"�Ƚ�
	int p = A.compare(1, 5, B, 4, 2); //"Bcdef"��"Ef"�Ƚ�
	int q = C.compare(0, 3, D, 0, 3); //"123"��"123"�Ƚ�
	cout << "m = " << m << ", n = " << n << ", p = " << p << ", q = " << q << endl;
	return 0;
}
