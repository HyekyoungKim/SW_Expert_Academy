#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1986 지그재그 숫자 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case) {
		int N, sum = 0;
		bool odd = true;
		cin >> N;
		for (int i = 1; i <= N; i++) {
			if (odd)
				sum += i;	// 홀수는 더한다.
			else
				sum -= i;	// 짝수는 뺀다.
			odd = !odd;
		}
		cout << "#" << test_case << " " << sum << '\n';
	}
	return 0;
}