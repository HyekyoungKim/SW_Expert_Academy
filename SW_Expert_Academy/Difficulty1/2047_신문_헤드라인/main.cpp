#include<iostream>
#include<string>

using namespace std;

/* Problem #2047 �Ź� ������ */
int main(int argc, char** argv)
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
	cout << s;
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}