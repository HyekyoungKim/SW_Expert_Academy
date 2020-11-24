#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

/* Problem #2005 �Ľ�Į�� �ﰢ�� */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case) {
		int N;
		cin >> N;
		vector<vector<int>> triangle;
		vector<int> first_row{1};
		triangle.push_back(first_row);
		for (int i = 1; i < N; i++) {
			vector<int> row;
			row.push_back(1);
			for (int j = 1; j < i; j++)
				row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
			row.push_back(1);
			triangle.push_back(row);
		}
		cout << "#" << test_case << '\n';
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < i + 1; j++)
				cout << triangle[i][j] << " ";
			cout << '\n';
		}
	}
	return 0;
}