#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str("12345678");
	char ch[] = "abcdefgh";
	string a;//定义一个空的字符串
	string str_1(str);//构造函数全部复制
	string str_2(str, 2, 5);//构造函数从第三个元素开始复制五个元素给str_2
	string str_3(ch, 5);//将字符串前五个字符赋值给str_3
	string str_4(5, 'X');//将五个X组成字符串"XXXXX"赋值给str_4
	string str_5(str.begin(), str.end());//复制str所有内容给str_5
	cout << str << endl;
	cout << a << endl;
	cout << str_1 << endl;
	cout << str_2 << endl;
	cout << str_3 << endl;
	cout << str_4 << endl;
	cout << str_5 << endl;
	return 0;
}
