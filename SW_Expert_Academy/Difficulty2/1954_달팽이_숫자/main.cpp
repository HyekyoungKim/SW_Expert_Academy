#include<iostream>
#include<cstdio>

using namespace std;

/* Problem #1954 ������ ���� */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case) {
		int N, arr[10][10], num = 1, row = 0, col = 0;
		cin >> N;
		if (N == 1)
			arr[0][0] = 1;
		else {
			for (int edge_len = N; edge_len > 0; edge_len -= 2) {
				if (edge_len == 1)
					arr[row][col] = num;
				else {
					for (int i = 0; i < edge_len - 1; i++)
						arr[row][col++] = num++;	// ���������� ����
					for (int j = 0; j < edge_len - 1; j++)
						arr[row++][col] = num++;	// �Ʒ������� ����
					for (int k = 0; k < edge_len - 1; k++)
						arr[row][col--] = num++;	// �������� ����
					for (int l = 0; l < edge_len - 1; l++)
						arr[row--][col] = num++;	// �������� ����
					row++; col++;
				}
			}
		}
		cout << "#" << test_case << '\n';
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				cout << arr[i][j] << " ";
			cout << '\n';
		}
	}
	return 0;
}