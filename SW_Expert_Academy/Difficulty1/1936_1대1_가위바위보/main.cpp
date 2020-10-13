#include<iostream>

using namespace std;

/* Problem #1936 Man-to-Man Rock-Paper-Scissors */
int main(int argc, char** argv)
{
	int A, B;
	cin >> A >> B;
	/* 가위: 1, 바위: 2, 보: 3 */
	if (A - B == 1 || A - B == -2)
		cout << 'A';
	else
		cout << 'B';
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}