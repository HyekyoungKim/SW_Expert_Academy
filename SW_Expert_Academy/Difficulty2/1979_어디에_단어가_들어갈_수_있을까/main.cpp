#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

/* Problem #1979 어디에 단어가 들어갈 수 있을까 */
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
		int N, K;	// N: 단어 퍼즐의 가로, 세로 길이 / K: 단어의 길이
		int count = 0;	// 길이 K를 갖는 단어가 들어갈 자리의 수
		int span;	// 단어가 들어갈 수 있는지 점검할 때 사용할 변수
		cin >> N >> K;
		vector<vector<int>> puzzle;
		for (int i = 0; i < N; i++) {
			vector<int> row;
			span = 0;
			for (int j = 0; j < N; j++) {
				int color;
				cin >> color;
				row.push_back(color);
				/* 가로 방향은 퍼즐 모양을 입력 받을 때 처리한다. */
				if (color == 1) {	// 이 셀의 색깔이 흰색
					span++;
					if (span == K && j == N - 1)
						count++;
				}
				else {	// 이 셀의 색깔이 검은색
					if (span == K)
						count++;
					span = 0;
				}
			}
			puzzle.push_back(row);
		}

		/* 세로 방향 처리 */
		for (int j = 0; j < N; j++) {
			span = 0;
			for (int i = 0; i < N; i++) {
				if (puzzle[i][j] == 1) {	// 이 셀의 색깔이 흰색
					span++;
					if (span == K && i == N - 1)
						count++;
				}
				else {	// 이 셀의 색깔이 검은색
					if (span == K)
						count++;
					span = 0;
				}
			}
		}

		cout << "#" << test_case << " " << count << '\n';
	}
	return 0;
}