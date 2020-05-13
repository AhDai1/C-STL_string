#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
#if 0
/*
	size_type find (value_type _Chr, size_type _Off = 0) const;
	//find()函数的第1个参数是被搜索的字符、第2个参数是在源串中开始搜索的下标位置
	size_type find (const value_type* _Ptr , size_type _Off = 0) const;
	//find()函数的第1个参数是被搜索的字符串，第2个参数是在源串中开始搜索的下标位置
	size_type find (const value_type* _Ptr, size_type _Off = 0, size_type _Count) const;
	//第1个参数是被搜索的字符串，第2个参数是源串中开始搜索的下标，第3个参数是关于第1个参数的字符个数，可能是 _Ptr 的所有字符数，也可能是 _Ptr 的子串宇符个数
	size_type find (const basic_string& _Str, size_type _Off = 0) const;
	//第1个参数是被搜索的字符串，第2参数是在源串中开始搜索的下标位置
*/

	string str_ch(" for");
	string str(" Hi, Peter, I'm sick. Please bought some drugs for me.");
	string::size_type m = str.find('P', 0);
	string::size_type rm = str.rfind('P', 100);
	cout << "Example - find() : The position (forward) of 'P' is: " << (int)m << endl;
	cout << "Example - rfind(): The position (reverse) of 'P' is: " << (int)rm << endl;

	string::size_type n = str.find(" some", 0);
	string::size_type rn = str.rfind(" some", 0);
	cout << "Example - find () : The position (forward) of 'some' is: " << (int)n << endl;
	cout << "Example - rfind () : The position (reverse) of 'some' is: " << (int)rn << endl;

	string::size_type mo = str.find(" drugs", 0, 5);
	string::size_type rmo = str.rfind(" drugs", 0, 5);
	cout << "Example - find(): The position (forward) of 'drugs' is: " << (int)mo << endl;
	cout << "Example - rfind(): The position (reverse) of 'drugs' is: " << (int)rmo << endl;

	string::size_type no = str.find(str_ch, 0);
	string::size_type rno = str.rfind(str_ch, 0);
	cout << "Example - find (): The position of 'for' is: " << (int)no << endl;
	cout << "Example - rfind(): The position of 'for' is: " << (int)rno << endl;

	cout << "=========================================" << endl;
#endif
#if 0
/*
	find_first_of() 函数可实现在源串中搜索某字符串的功能，
	该函数的返回值是被搜索字符串的第 1 个字符第 1 次出现的下标（位置）。
	若查找失败，则返回 npos。

	find_last_of() 函数同样可实现在源串中搜索某字符串的功能。
	与 find_first_of() 函数所不同的是，该函数的返回值是被搜索字符串的最后 1 个字符的下标（位置）。
	若查找失败，则返回 npos。

	size_type find_first_of (value_type_Ch, size_type_Off = 0) const; 
	size_type find_first_of (const value_type* _Ptr, size_type _Off = 0) const;
	size_type find_first_of (const value_type* _Ptr, size_type_Off, size_type_Count) const;
	size_type find_first_of (const basic_string & _Str, size_type_Off = 0) const;
	size_type find_last_of (value_type _Ch, size_type_Off = npos) const;
	size_type find_last_of (const value_type* _Ptr, size_type_Off = npos) const;
	size_type find_last_of (const value_type* _Ptr, size_type _Off, size_type _Count) const;
	size_type find_last_of (const basic_string& _Str, size_type_Off = npos) const;
*/
	string str_ch("for");
	string str("Hi, Peter, I'm sick. Please bought some drugs for me. ");
	int length = str.length();
	cout << length << endl;
	string::size_type m = str.find_first_of('P', 0);
	string::size_type rm = str.find_last_of('P', (length - 1));
	cout << "Example - find_first_of (): The position (forward) of 'P' is: " << (int)m << endl;
	cout << "Example - find_last_of (): The position (reverse) of 'P' is： " << (int)rm << endl;

	string::size_type n = str.find_first_of("some", 0);//返回"some"中任意一个首次出现在源串的位置
	string::size_type rn = str.find_last_of("some", (length - 1));
	cout << "Example - find_first_of(): The position (forward) of 'some' is: " << (int)n << endl;
	cout << "Example - find_last_of(): The position (reverse) of 'some' is: " << (int)rn << endl;

	string::size_type mo = str.find_first_of("drugs", 0, 2);//返回"drugs"中的第二个字符首次出现在源串的位置
	string::size_type rmo = str.find_last_of("drugs", (length - 1), 2);
	cout << "Example - find_first_of () : The position (forward) of 'drugs' is: " << (int)mo << endl;
	cout << "Example - find_last_of () : The position (reverse) of 'drugs' is: " << (int)rmo << endl;

	string::size_type no = str.find_first_of(str_ch, 0);
	string::size_type rno = str.find_last_of(str_ch, (length - 1));
	cout << "Example - find_first_of() : The position of 'for' is: " << (int)no << endl;
	cout << "Example - find_last_of () : The position of 'for' is: " << (int)rno << endl;
#endif

/*
	size_type find_first_not_of (value_type _Ch, size_type_Off = 0) const;
	size_type find_first_not_of (const value_type * _Ptr, size_type_Off = 0) const;
	size_type find_first_not_of (const value_type* _Ptr, size_type_Off, size_type_Count) const;
	size_type find_first_not_of (const basic_string & _Str, size_type_Off = 0) const;

	find_first_not_of() 函数可实现在源字符串中搜索与指定字符（串）不相等的第 1 个字符；
	find_last_not_of() 函数可实现在源字符串中搜索与指定字符（串）不相等的最后 1 个字符。
*/

	string str_ch(" for");
	string str("Hi, Peter, I'm sick. Please bought some drugs for me. ");
	int length = str.length();
	cout << length << endl;
	string::size_type m = str.find_first_not_of('P', 0);
	string::size_type rm = str.find_last_not_of('P', (length - 1));
	cout << "Example - find_first_of (): The position (forward) of 'P' is: " << (int)m << endl;
	cout << "Example - find_last_of (): The position (reverse) of 'P' is: " << (int)rm << endl;

	string::size_type n = str.find_first_not_of("some", 0);
	string::size_type rn = str.find_last_not_of("some", (length - 1));
	cout << "Example - find_first_of (): The position (forward) of 'some' is: " << (int)n << endl;
	cout << "Example - find_last_of (): The position (reverse) of 'some' is: " << (int)rn << endl;

	string::size_type mo = str.find_first_not_of("drugs", 0, 2);
	string::size_type rmo = str.find_last_not_of("drugs", (length - 1), 2);
	cout << "Example - find_first_of (): The position (forward) of 'drugs' is: " << (int)mo << endl;
	cout << "Example - find_last_of (): The position (reverse) of 'drugs' is: " << (int)rmo << endl;

	string::size_type no = str.find_first_not_of(str_ch, 0);
	string::size_type rno = str.find_last_not_of(str_ch, (length - 1));
	cout << "Example - find_first_of (): The position of 'for' is: " << (int)no << endl;
	cout << "Example - find_last_of () : The position of 'for' is: " << (int)rno << endl;

	return 0;
}
