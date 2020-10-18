#include<iostream>

using namespace std;

/* Problem #2070 큰 놈, 작은 놈, 같은 놈 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		int a, b;
		cin >> a >> b;
		cout << "#" << test_case << " ";
		if (a > b)
			cout << ">";
		else if (a == b)
			cout << "=";
		else
			cout << "<";
		cout << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}