#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

/*
	basic_string& replace (size_type p0, size_type n0, const E * s); //使用字符串 s 字符，从源串的位置 P0 处开始替换源串n个字符
	basic_string& replace (size_type p0, size_type n0, const E *s, size_type n); //使用字符串 s 中的 n 个字符，从源串的位置 P0 处开始替换 1 个字符
	basic_string& replace (size_type p0, size_type n0, const basic_string& str); //使用字符串 s 中的 n 个字符，从源串的位置 P0 处开始替换
	basic_string& replace (size_type p0, size_type n0, const basic_string& str, size_type pos, size_type n); //使用串 str 的子串 str [pos, pos + n-1] 替换源串中的内容，从位置 p0 处开始替换，替换字符 n0 个
	basic_string& replace (size_type p0, size_type n0, size_type n, E c); //使用 n 个字符 'c' 替换源串中位置 p0 处开始的 n0 个字符
	basic_string& replace (iterator first0, iterator last0, const E * s);//使用迭代器替换，和 1) 用法类似
	basic_string& replace (iterator first0, iterator last0, const E * s, size_type n);//和 2) 类似
	basic_string& replace (iterator first0, iterator last0, const basic_string& str); //和 3) 类似
	basic_string& replace (iterator first0, iterator last0, size_type n, E c); //和 5) 类似
	basic_string& replace (iterator first0, iterator last0, const_iterator first, const_iterator last); //使用迭代器替换
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
	var.replace(3, 1, dest.c_str(), 4); //这种方式会限定字符串替换的最大长度
	cout <<  var << endl;

	return 0;
}
