#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s("The zip code of Hondelage in Germany is 38108.");
	cout << "Original: " << s << endl;
	string sd(s.begin(), s.end()); //���캯����ʹ�õ�����
	cout << "Destination: " << sd << endl;
	transform(sd.begin(), sd.end(), sd.begin(), toupper);
	cout << "Destination (All Toupper)): " << sd << endl;
	string sd1;
	sd1.append(sd.begin(), (sd.end() - 7)); //append()������ʹ�õ�����
	cout << "Destination sd1: " << sd1 << endl;
/*
	sd2.begin() ����һ������������ָ������c�ĵ�һ��Ԫ��

	sd2.end() ����һ������������ָ������c�����һ��Ԫ�ص���һ��λ��

	sd2.rbegin() ����һ���������������ָ������c�����һ��Ԫ��

	sd2.rend() ����һ���������������ָ������c�ĵ�һ��Ԫ��ǰ���λ��
*/
	string sd2;
	string::reverse_iterator iterA;
	string temp = "0";
	for (iterA = sd.rbegin(); iterA != sd.rend(); iterA++) //reverse_iterator
	{
		temp = *iterA;
		sd2.append(temp);
	}
	cout << "Destination sd2: " << sd2 << endl;
	sd2.erase(sd2.begin(), sd2.begin() + 15); //erase()������ʹ�õ�����
	cout << "Destination sd2 (Erased 15 chars) : " << sd2 << endl;
	string::iterator iterB = sd2.begin();
	string sd3 = string("12345678");
	sd2.insert(iterB, sd3.begin(), sd3.end()); //insert()������ʹ�õ�����
	cout << "Destination sd2 (Insert 8 chars) : " << sd2 << endl;
	sd2.replace(sd2.begin(), sd2.end(), "This is an Exarrple of Replace"); //Replace
	cout << "Destination sd2 (Replace All): " << sd2 << endl; // replace ()������ʹ�õ�����
	return 0;
}
