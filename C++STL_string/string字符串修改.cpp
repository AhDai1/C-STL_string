#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
/*
	basic_string& assign (const E*s); //直接使用字符串赋值
	basic_string& assign (const E*s, size_type n);
	basic_string& assign (const basic_string & str, size_type pos, size_type n);
	//将str的子串赋值给调用串
	basic_string& assign (const basic_string& str);    //使用字符串的“引用”赋值
	basic_string& assign (size_type n, E c) ; //使用 n个重复字符赋值
	basic_string& assign (const_iterator first, const_iterator last);    //使用迭代器赋值
*/

/*
	iterator erase (iterator first, iterator last);
	iterator erase (iterator it);
	basic_string& erase (size_type p0 = 0, size_type n = npos);
*/

/*
	basic_string& insert (size_type p0 , const E * s); //插人 1 个字符至字符串 s 前面
	basic_string& insert (size_type p0 , const E * s, size_type n); // 将 s 的前 3 个字符插入p0 位置
	basic_string& insert (size_type p0, const basic_string& str);
	basic_string& insert (size_type p0, const basic_string& str,size_type pos, size_type n); //选取 str 的子串
	basic_string& insert (size_type p0, size_type n, E c); //在下标 p0 位置插入  n 个字符 c
	iterator insert (iterator it, E c); //在 it 位置插入字符 c
	void insert (iterator it, const_iterator first, const_iterator last); //在字符串前插入字符
	void insert (iterator it, size_type n, E c) ; //在 it 位置重复插入 n 个字符 c
*/

/*
	basic_string& append (const E * s); //在原始字符串后面追加字符串s
	basic_string& append (const E * s, size_type n);//在原始字符串后面追加字符串 s 的前 n 个字符
	basic_string& append (const basic_string& str, size_type pos,size_type n);//在原始字符串后面追加字符串 s 的子串 s [ pos,…,pos +n -1]
	basic_string& append (const basic_string& str);
	basic_string& append (size_type n, E c); //追加 n 个重复字符
	basic_string& append (const_iterator first, const_iterator last); //使用迭代器追加
*/
	string str1("123456");
	string str;
	str.assign(str1);//直接赋值
	cout << str << endl;
	str.assign(str1, 3, 3);//赋值456
	cout << str << endl;
	str.assign(5, 'X');
	cout << str << endl;
	string::iterator itB;
	string::iterator itE;
	itB = str1.begin();
	itE = str1.end();
	str.assign(itB, --itE);
	cout << str << endl;
	cout << "----------------------------------------" << endl;
	str = str1;
	string::iterator it;
	it = str.begin() + 1;
	str.erase(it);//删除某个值
	str.erase(1, 2);//删除下标1-2的值
	cout << str << endl;
	cout << "-------------------------------" << endl;
	string A("ello");
	string B("H");
	B.insert(1, A);
	cout << B << endl;
	A = "ello";
	B = "H";
	B.insert(1, "abcd", 3);//将"abcd"前三个字符插入B下标为1的位置
	cout << B << endl;
	A = "ello";
	B = "H";
	B.insert(1, 5, 'C');
	cout << B << endl;
	A = "ello";
	B = "H";
	string::iterator it1 = B.begin() + 1;
	string::iterator itB1 = A.begin();
	string::iterator itE1 = A.end();
	B.insert(it1, itB1, itE1);
	cout << B << endl;
	cout << "-----------------------------------" << endl;
	A = "ello";
	B = "H";
	cout << "A = " << A << ", B = " << B << endl;
	B.append(A);
	cout << "追加：" << B << endl;
	B = "H";
	cout << "A = " << A << ", B= " << B << endl;
	B.append("12345", 2);//追加"12345"前两个字符
	cout << "追加：" << B << endl;
	A = "ello";
	B = "H";
	cout << "A = " << A << ", B= " << B << endl;
	B.append("12345", 2, 3);//追加"12345"下标为2的以后三个字符
	cout << "追加：" << B << endl;
	A = "ello";
	B = "H";
	cout << "A = " << A << ", B = " << B << endl;
	B.append(10, 'a');
	cout << "追加:" << B << endl;
	A = "ello";
	B = "H";
	cout << "A = " << A << ", B = " << B << endl;
	B.append(A.begin(), A.end());
	cout << "追加:" << B << endl;
	return 0;
}
