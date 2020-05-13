#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
/*
	basic_string& assign (const E*s); //ֱ��ʹ���ַ�����ֵ
	basic_string& assign (const E*s, size_type n);
	basic_string& assign (const basic_string & str, size_type pos, size_type n);
	//��str���Ӵ���ֵ�����ô�
	basic_string& assign (const basic_string& str);    //ʹ���ַ����ġ����á���ֵ
	basic_string& assign (size_type n, E c) ; //ʹ�� n���ظ��ַ���ֵ
	basic_string& assign (const_iterator first, const_iterator last);    //ʹ�õ�������ֵ
*/

/*
	iterator erase (iterator first, iterator last);
	iterator erase (iterator it);
	basic_string& erase (size_type p0 = 0, size_type n = npos);
*/

/*
	basic_string& insert (size_type p0 , const E * s); //���� 1 ���ַ����ַ��� s ǰ��
	basic_string& insert (size_type p0 , const E * s, size_type n); // �� s ��ǰ 3 ���ַ�����p0 λ��
	basic_string& insert (size_type p0, const basic_string& str);
	basic_string& insert (size_type p0, const basic_string& str,size_type pos, size_type n); //ѡȡ str ���Ӵ�
	basic_string& insert (size_type p0, size_type n, E c); //���±� p0 λ�ò���  n ���ַ� c
	iterator insert (iterator it, E c); //�� it λ�ò����ַ� c
	void insert (iterator it, const_iterator first, const_iterator last); //���ַ���ǰ�����ַ�
	void insert (iterator it, size_type n, E c) ; //�� it λ���ظ����� n ���ַ� c
*/

/*
	basic_string& append (const E * s); //��ԭʼ�ַ�������׷���ַ���s
	basic_string& append (const E * s, size_type n);//��ԭʼ�ַ�������׷���ַ��� s ��ǰ n ���ַ�
	basic_string& append (const basic_string& str, size_type pos,size_type n);//��ԭʼ�ַ�������׷���ַ��� s ���Ӵ� s [ pos,��,pos +n -1]
	basic_string& append (const basic_string& str);
	basic_string& append (size_type n, E c); //׷�� n ���ظ��ַ�
	basic_string& append (const_iterator first, const_iterator last); //ʹ�õ�����׷��
*/
	string str1("123456");
	string str;
	str.assign(str1);//ֱ�Ӹ�ֵ
	cout << str << endl;
	str.assign(str1, 3, 3);//��ֵ456
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
	str.erase(it);//ɾ��ĳ��ֵ
	str.erase(1, 2);//ɾ���±�1-2��ֵ
	cout << str << endl;
	cout << "-------------------------------" << endl;
	string A("ello");
	string B("H");
	B.insert(1, A);
	cout << B << endl;
	A = "ello";
	B = "H";
	B.insert(1, "abcd", 3);//��"abcd"ǰ�����ַ�����B�±�Ϊ1��λ��
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
	cout << "׷�ӣ�" << B << endl;
	B = "H";
	cout << "A = " << A << ", B= " << B << endl;
	B.append("12345", 2);//׷��"12345"ǰ�����ַ�
	cout << "׷�ӣ�" << B << endl;
	A = "ello";
	B = "H";
	cout << "A = " << A << ", B= " << B << endl;
	B.append("12345", 2, 3);//׷��"12345"�±�Ϊ2���Ժ������ַ�
	cout << "׷�ӣ�" << B << endl;
	A = "ello";
	B = "H";
	cout << "A = " << A << ", B = " << B << endl;
	B.append(10, 'a');
	cout << "׷��:" << B << endl;
	A = "ello";
	B = "H";
	cout << "A = " << A << ", B = " << B << endl;
	B.append(A.begin(), A.end());
	cout << "׷��:" << B << endl;
	return 0;
}
