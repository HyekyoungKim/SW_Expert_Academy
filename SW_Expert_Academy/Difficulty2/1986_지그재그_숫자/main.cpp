#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1986 ������� ���� */
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
		int N, sum = 0;
		bool odd = true;
		cin >> N;
		for (int i = 1; i <= N; i++) {
			if (odd)
				sum += i;	// Ȧ���� ���Ѵ�.
			else
				sum -= i;	// ¦���� ����.
			odd = !odd;
		}
		cout << "#" << test_case << " " << sum << '\n';
	}
	return 0;
}