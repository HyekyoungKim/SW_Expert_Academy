#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #2007 ���� ������ ���� */
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
		string str, pat, tmp = "";
		cin >> str;
		pat = str[0];
		int j = 0;	// pat�� �ε���
		for (int i = 1; i < 30; i++) {
			if (str[i] != pat[j]) {
				pat += tmp;
				pat += str[i];
				j = 0;
				tmp = "";
			}
			else {
				tmp += str[i];
				j++;
				if (j >= pat.length())
					j = 0;	// break;�� ���� ���� 'ABABC'�� ��� ���� ���̰� 5�� �ƴ� 2�� ��µȴ�.
			}
		}
		cout << "#" << test_case << " " << pat.length() << '\n';
	}
	return 0;
}