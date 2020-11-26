#include<iostream>
#include<cstdio>

using namespace std;

/* 숫자 n에 있는 3 또는 6 또는 9의 개수를 반환하는 함수 */
int count(int n) {
	int c = 0;
	while (n > 0) {
		switch (n % 10) {
		case 3:
		case 6:
		case 9:
			c++;
		default:
			break;
		}
		n /= 10;
	}
	return c;
}

/* Problem #1926 간단한 369게임 */
int main(int argc, char** argv)
{
	int N;
	
	freopen("input.txt", "r", stdin);
	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		int c = count(i);
		if (c > 0)
			for (int j = 0; j < c; j++)
				cout << "-";
		else
			cout << i;
		cout << " ";
	}
	return 0;
}