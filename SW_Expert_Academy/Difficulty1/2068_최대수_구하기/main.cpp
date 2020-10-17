#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/* Problem #2068 최대수 구하기 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		vector<int> v;
		int num;
		for (int i = 0; i < 10; i++) {
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end(), greater<int>());
		cout << "#" << test_case << " " << v.front() << '\n';
	}
	return 0;
}