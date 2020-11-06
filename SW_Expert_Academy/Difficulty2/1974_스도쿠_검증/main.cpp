#include<iostream>
#include<cstdio>

using namespace std;

/* 1974 ������ ���� */
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
		int puzzle[9][9];
		bool ok = true;
		bool seen[10];
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				cin >> puzzle[i][j];
		for (int i = 0; i < 9; i++) { // �� �� ����
			for (int k = 1; k < 10; k++)
				seen[k] = false;
			for (int j = 0; j < 9; j++) {
				if (seen[puzzle[i][j]]) {
					ok = false;
					break;
				}
				seen[puzzle[i][j]] = true;
			}
			if (!ok)
				break;
		}

		if (ok) { // �� �� ����
			for (int j = 0; j < 9; j++) {
				for (int k = 1; k < 10; k++)
					seen[k] = false;
				for (int i = 0; i < 9; i++) {
					if (seen[puzzle[i][j]]) {
						ok = false;
						break;
					}
					seen[puzzle[i][j]] = true;
				}
				if (!ok)
					break;
			}
		}

		if (ok) { // �� 3x3 ���� ���� ����
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					for (int k = 1; k < 10; k++)
						seen[k] = false;
					for (int row = 0; row < 3; row++) {
						for (int col = 0; col < 3; col++) {
							if (seen[puzzle[3 * i + row][3 * j + col]]) {
								ok = false;
								break;
							}
							seen[puzzle[3 * i + row][3 * j + col]] = true;
						}
						if (!ok)
							break;
					}
					if (!ok)
						break;
				}
				if (!ok)
					break;
			}
		}
		cout << "#" << test_case << " ";
		if (ok)
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}
	return 0;
}