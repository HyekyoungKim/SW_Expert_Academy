#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

/* Problem #2001 파리 퇴치 */
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
		int N, M, sum = 0, max_sum = 0;
		vector<vector<int>> flies;
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			vector<int> row;
			for (int j = 0; j < N; j++) {
				int num;
				cin >> num;
				row.push_back(num);
			}
			flies.push_back(row);
		}
		max_sum = -1;
		for (int begin_row = 0; begin_row + M <= N; begin_row++) {
			for (int begin_col = 0; begin_col + M <= N; begin_col++) {
				sum = 0;
				for (int i = 0; i < M; i++)
					for (int j = 0; j < M; j++)
						sum += flies[begin_row + i][begin_col + j];
				if (sum > max_sum)
					max_sum = sum;
			}
		}
		cout << "#" << test_case << " " << max_sum << '\n';
	}
	return 0;
}