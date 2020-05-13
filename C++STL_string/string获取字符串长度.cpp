#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
/*
	size() 和 length()：这两个函数会返回 string 类型对象中的字符个数，且它们的执行效果相同。
	max_size()：max_size() 函数返回 string 类型对象最多包含的字符数。
	一旦程序使用长度超过 max_size() 的 string 操作，编译器会拋出 length_error 异常。
	capacity()：该函数返回在重新分配内存之前，string 类型对象所能包含的最大字符数。
*/
	int size = 0;
	int length = 0;
	unsigned long maxsize = 0;
	int capacity = 0;
	string str("12345678");
	string str_custom;
	str_custom = str;
	str_custom.reserve(5);//修改容量
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
