#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;

/* Problem #1966 숫자를 정렬하자 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case) {
		int N;
		vector<int> v;
		cin >> N;
		for (int i = 0; i < N; i++) {
			int num;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());	// 오름차순으로 정렬
		cout << "#" << test_case << " ";
		for (int i = 0; i < N; i++)
			cout << v.at(i) << " ";
		cout << '\n';
	}
	return 0;
}