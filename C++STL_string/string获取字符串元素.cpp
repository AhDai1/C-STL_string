#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
/*
	下标操作符 [] 在使用时不检查索引的有效性，如果下标超出字符的长度范围，会示导致未定义行为。
	对于常量字符串，使用下标操作符时，字符串的最后字符（即 '\0'）是有效的。
	对应 string 类型对象（常量型）最后一个字符的下标是有效的，调用返回字符 '\0'。

	函数 at() 在使用时会检查下标是否有效。如果给定的下标超出字符的长度范围，系统会抛出 out_of_range 异常。
*/
	string str("abcde");
	char temp = str[2];
	char temp_1 = str.at(2);
	//char temp_2 = str[str.length];//指向'\0',报错
	//char temp_3 = str.at(str.length);//异常
	cout << temp << temp_1 <<  endl;
	cout << "-----------------------" << endl;
	/*下标操作符[] 和函数 at() 均返回字符的“引用”*/
	cout << str << endl;
	char &r = str[2];
	char *p = &str[3];
	r = 'X';
	*p = 'Y';
	cout << str << endl;

	str = "123456";//当字符串修改以后原来的引用关系h还是可以改变字符串的值
	r = 'X';
	*p = 'Y';
	cout << str << endl;

	return 0;
}
