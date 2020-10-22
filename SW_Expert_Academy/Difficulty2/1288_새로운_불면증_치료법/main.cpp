#include<iostream>

using namespace std;

/* Problem #1288 새로운 불면증 치료법 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		bool seen[10] = { false }; // 모든 원소가 false로 초기화된다.
		int N, x;
		cin >> N;
		for (x = 1; ; x++) {
			bool finish = true;
			int temp = x * N;
			while (temp > 0) {
				seen[temp % 10] = true;
				temp /= 10;
			}
			for (int i = 0; i < 10; i++)
				if (!seen[i]) {
					finish = false;
					break;
				}
			if (finish)
				break;
		}
		cout << "#" << test_case << " " << x * N << '\n';
	}
	return 0;
}