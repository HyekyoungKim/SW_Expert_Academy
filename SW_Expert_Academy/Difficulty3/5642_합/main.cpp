#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #5642 합*/
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("intensive_input.txt", "r", stdin);
	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case) {
		int N, current_sum, max_sum;
		cin >> N;
		cin >> current_sum;		// 첫 번째 정수
		max_sum = current_sum;
		for (int i = 1; i < N; i++) {
			int num;
			cin >> num;
			if (num >= 0 && current_sum <= 0)	// ex) 2 -4 [3], i = 2
				current_sum = num;
			else if (num >= 0 && current_sum >= 0)	// ex) [5 -1 2], i = 2
				current_sum += num;
			else if (num < 0) {
				if (current_sum + num > 0) {		// ex) [5 -1 2], i = 1
					if (current_sum > max_sum)		// ex) 2 -3 [3] -1, i = 3
						max_sum = current_sum;
					current_sum += num;
				}
				else {
					if (num > max_sum) {				// ex) -3 -2 [1], i = 1
						current_sum = num;
						max_sum = num;
					}
					else
						current_sum = -1001;			// ex) 2 -4 [3], i = 1
				}
			}
		}
		if (current_sum > max_sum)
			max_sum = current_sum;
		cout << "#" << test_case << " " << max_sum << '\n';
	}
	return 0;
}