#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1946 간단한 압축 풀기 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	freopen("input.txt", "r", stdin);
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		int N, count = 0;
		cin >> N;
		cout << "#" << test_case << " " << '\n';
		for (int i = 0; i < N; i++) {
			char C;
			int K;
			cin >> C >> K;
			for (int j = 0; j < K; j++) {
				cout << C;
				count++;
				if (count == 10) {
					cout << '\n';
					count = 0;
				}
			}
		}
		cout << '\n';
	}
	return 0;
}