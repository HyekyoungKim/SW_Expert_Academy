#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

/* Problem #1979 ��� �ܾ �� �� ������ */
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
		int N, K;	// N: �ܾ� ������ ����, ���� ���� / K: �ܾ��� ����
		int count = 0;	// ���� K�� ���� �ܾ �� �ڸ��� ��
		int span;	// �ܾ �� �� �ִ��� ������ �� ����� ����
		cin >> N >> K;
		vector<vector<int>> puzzle;
		for (int i = 0; i < N; i++) {
			vector<int> row;
			span = 0;
			for (int j = 0; j < N; j++) {
				int color;
				cin >> color;
				row.push_back(color);
				/* ���� ������ ���� ����� �Է� ���� �� ó���Ѵ�. */
				if (color == 1) {	// �� ���� ������ ���
					span++;
					if (span == K && j == N - 1)
						count++;
				}
				else {	// �� ���� ������ ������
					if (span == K)
						count++;
					span = 0;
				}
			}
			puzzle.push_back(row);
		}

		/* ���� ���� ó�� */
		for (int j = 0; j < N; j++) {
			span = 0;
			for (int i = 0; i < N; i++) {
				if (puzzle[i][j] == 1) {	// �� ���� ������ ���
					span++;
					if (span == K && i == N - 1)
						count++;
				}
				else {	// �� ���� ������ ������
					if (span == K)
						count++;
					span = 0;
				}
			}
		}

		cout << "#" << test_case << " " << count << '\n';
	}
	return 0;
}