#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1940 가랏! RC카! */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	freopen("input.txt", "r", stdin);
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		int N, dist = 0, v = 0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			int command, a;
			cin >> command;
			switch (command) {
			case 0:	// 현재 속도 유지
				break;
			case 1:	// 가속
				cin >> a;
				v += a;
				break;
			case 2:	// 감속
				cin >> a;
				if (v - a >= 0)
					v -= a;
				else
					v = 0;
				break;
			default:
				break;
			}
			dist += v;
		}
		cout << "#" << test_case << " " << dist << '\n';
	}
	return 0;
}