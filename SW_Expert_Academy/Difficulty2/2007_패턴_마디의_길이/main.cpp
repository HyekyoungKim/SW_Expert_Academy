#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #2007 패턴 마디의 길이 */
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
		string str, pat, tmp = "";
		cin >> str;
		pat = str[0];
		int j = 0;	// pat의 인덱스
		for (int i = 1; i < 30; i++) {
			if (str[i] != pat[j]) {
				pat += tmp;
				pat += str[i];
				j = 0;
				tmp = "";
			}
			else {
				tmp += str[i];
				j++;
				if (j >= pat.length())
					j = 0;	// break;로 쓰면 마디가 'ABABC'인 경우 마디 길이가 5가 아닌 2로 출력된다.
			}
		}
		cout << "#" << test_case << " " << pat.length() << '\n';
	}
	return 0;
}