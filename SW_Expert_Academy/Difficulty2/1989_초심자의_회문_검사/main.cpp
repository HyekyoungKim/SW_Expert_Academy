#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1989 �ʽ����� ȸ�� �˻� */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case) {
		string s;
		bool palindrome = true;
		cin >> s;
		int len = s.length();
		for (int i = 0; i < len; i++)
			if (s[i] != s[len - i - 1]) {
				palindrome = false;
				break;
			}
		cout << "#" << test_case << " " << (palindrome ? 1 : 0) << '\n';
	}
	return 0;
}