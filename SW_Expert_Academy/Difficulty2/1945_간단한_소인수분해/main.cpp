#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1945 간단한 소인수분해 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	freopen("input.txt", "r", stdin);
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		int N, a = 0, b = 0, c = 0, d = 0, e = 0;
		cin >> N;
		while (N % 2 == 0) {
			a++;
			N /= 2;
		}
		while (N % 3 == 0) {
			b++;
			N /= 3;
		}
		while (N % 5 == 0) {
			c++;
			N /= 5;
		}
		while (N % 7 == 0) {
			d++;
			N /= 7;
		}
		while (N % 11 == 0) {
			e++;
			N /= 11;
		}
		cout << "#" << test_case << " " << a << " " << b << " " << c << " " << d << " " << e << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}