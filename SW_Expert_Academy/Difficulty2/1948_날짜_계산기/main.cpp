#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1948 날짜 계산기 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	freopen("input.txt", "r", stdin);
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case) {
		int m1, d1, m2, d2;	// 첫 번째 날짜: m1 / d1, 두 번째 날짜: m2 / d2
		int sol;
		cin >> m1 >> d1 >> m2 >> d2;
		if (m1 == m2)
			sol = d2 - d1 + 1;
		else { // m1 < m2
			sol = days[m1] - d1 + 1;	// m1월에 있는 날 수 세기
			for (int i = m1 + 1; i < m2; i++)
				sol += days[i];	// m1월과 m2월 사이에 있는 날 수 세기
			sol += d2;
		}
		cout << "#" << test_case << " " << sol << '\n';
	}
	return 0;
}