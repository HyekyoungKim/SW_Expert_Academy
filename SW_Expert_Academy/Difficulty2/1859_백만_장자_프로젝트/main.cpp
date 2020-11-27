#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

/* Problem #1895 백만 장자 프로젝트 */
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
		int N;
		cin >> N;
		/* N번째 날의 매매가를 a라 할 때
		k번째 날부터 (N - 1)번째 날까지의 매매가가 a 이하이고
		(k - 1)번째 날의 매매가가 a보다 크다면,
		k번째 날부터 (N - 1)번째 날까지 하나씩 구입하고 이를 모두 N번째 날에 판매하면 된다.
		마찬가지로 (k - 1)번째 날의 매매가를 b라 할 때
		l번째 날부터 (k - 2)번째 날까지의 매매가가 b 이하이고
		(l - 1)번째 날의 매매가가 b보다 크다면,
		l번째 날부터 (k - 1)번째 날까지 하나씩 구입하고 이를 모두 k번째 날에 판매하면 된다.
		이와 같은 방식으로 반복한다.*/

		/* N이 최대 1,000,000이고 각 날의 매매가가 최대 10,000이므로
		int(4 바이트) 대신 long long(8바이트)을 사용한다. */
		vector<long long> prices;
		long long price;
		for (int i = 0; i < N; i++) {
			cin >> price;
			prices.push_back(price);
		}
		long long sum = 0;
		int max_idx = N - 1;
		while (max_idx > 0) {
			long long max = prices[max_idx];
			int i;
			for (i = max_idx - 1; i >= 0 && prices[i] <= max; i--)
				sum += (max - prices[i]);
			max_idx = i;
		}
		cout << "#" << test_case << " " << sum << '\n';
	}
	return 0;
}