#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>

using namespace std;

/* Problem #1984 중간 평균값 구하기 */
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
		vector<int> num;
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			int n;
			cin >> n;
			num.push_back(n);
		}
		sort(num.begin(), num.end());	// 오름차순으로 정렬
		for (int i = 1; i <= 8; i++)
			sum += num[i];
		cout << "#" << test_case << " " << round((double)sum / 8) << '\n';
	}
	return 0;
}