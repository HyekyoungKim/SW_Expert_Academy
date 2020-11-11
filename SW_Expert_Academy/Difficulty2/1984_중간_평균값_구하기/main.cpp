#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>

using namespace std;

/* Problem #1984 �߰� ��հ� ���ϱ� */
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
		vector<int> num;
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			int n;
			cin >> n;
			num.push_back(n);
		}
		sort(num.begin(), num.end());	// ������������ ����
		for (int i = 1; i <= 8; i++)
			sum += num[i];
		cout << "#" << test_case << " " << round((double)sum / 8) << '\n';
	}
	return 0;
}