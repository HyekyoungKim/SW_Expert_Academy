#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1961 숫자 배열 회전 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case) {
		int arr[7][7];
		int N;
		cin >> N;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> arr[i][j];
		cout << "#" << test_case << '\n';
		for (int i = 0; i < N; i++) {
			for (int j = N - 1; j >= 0; j--)
				cout << arr[j][i];
			cout << " ";
			for (int j = N - 1; j >= 0; j--)
				cout << arr[N - 1 - i][j];
			cout << " ";
			for (int j = 0; j < N; j++)
				cout << arr[j][N - 1 - i];
			cout << '\n';
		}
	}
	return 0;
}