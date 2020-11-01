#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1959 두 개의 숫자열 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case) {
		int N, M, short_len, long_len, max_sum;
		int short_arr[20], long_arr[20];
		cin >> N >> M;
		if (N <= M) {
			for (int i = 0; i < N; i++)
				cin >> short_arr[i];
			for (int j = 0; j < M; j++)
				cin >> long_arr[j];
			short_len = N;
			long_len = M;
		}
		else {
			for (int i = 0; i < N; i++)
				cin >> long_arr[i];
			for (int j = 0; j < M; j++)
				cin >> short_arr[j];
			short_len = M;
			long_len = N;
		}
		max_sum = 0;
		for (int i = 0; i < short_len; i++)
			max_sum += short_arr[i] * long_arr[i];
		for (int step = 1; step + short_len - 1 < long_len; step++) {
			int sum = 0;
			for (int i = 0; i < short_len; i++)
				sum += short_arr[i] * long_arr[step + i];
			if (sum > max_sum)
				max_sum = sum;
		}
		cout << "#" << test_case << " " << max_sum << '\n';
	}
	return 0;
}