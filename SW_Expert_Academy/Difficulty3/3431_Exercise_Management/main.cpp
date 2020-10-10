#include<iostream>

using namespace std;

/* Problem #3431 준환이의 운동관리 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int L, U, X;
		cin >> L >> U >> X;
		cout << "#" << test_case << " ";
		if (X < L) // 하한보다 적게 한 경우
			cout << L - X << endl;
		else if (X >= L && X <= U) // 상한과 하한 사이인 경우
			cout << 0 << endl;
		else // 상한보다 많이 한 경우
			cout << -1 << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}