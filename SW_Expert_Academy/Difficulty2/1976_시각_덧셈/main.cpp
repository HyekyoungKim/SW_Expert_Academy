#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1976 �ð� ���� */
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
		int h1, m1, h2, m2, h, m, carry = 0;
		cin >> h1 >> m1 >> h2 >> m2;
		m = m1 + m2;
		if (m >= 60) {
			carry = 1;
			m -= 60;
		}
		h = h1 + h2 + carry;
		if (h == 12 || h == 24)
			h = 12;
		else
			h = h % 12;
		cout << "#" << test_case << " " << h << " " << m << '\n';
	}
	return 0;
}