#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1989 초심자의 회문 검사 */
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
		string s;
		bool palindrome = true;
		cin >> s;
		int len = s.length();
		for (int i = 0; i < len; i++)
			if (s[i] != s[len - i - 1]) {
				palindrome = false;
				break;
			}
		cout << "#" << test_case << " " << (palindrome ? 1 : 0) << '\n';
	}
	return 0;
}