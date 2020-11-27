#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

/* Problem #1895 �鸸 ���� ������Ʈ */
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
		/* N��° ���� �ŸŰ��� a�� �� ��
		k��° ������ (N - 1)��° �������� �ŸŰ��� a �����̰�
		(k - 1)��° ���� �ŸŰ��� a���� ũ�ٸ�,
		k��° ������ (N - 1)��° ������ �ϳ��� �����ϰ� �̸� ��� N��° ���� �Ǹ��ϸ� �ȴ�.
		���������� (k - 1)��° ���� �ŸŰ��� b�� �� ��
		l��° ������ (k - 2)��° �������� �ŸŰ��� b �����̰�
		(l - 1)��° ���� �ŸŰ��� b���� ũ�ٸ�,
		l��° ������ (k - 1)��° ������ �ϳ��� �����ϰ� �̸� ��� k��° ���� �Ǹ��ϸ� �ȴ�.
		�̿� ���� ������� �ݺ��Ѵ�.*/

		/* N�� �ִ� 1,000,000�̰� �� ���� �ŸŰ��� �ִ� 10,000�̹Ƿ�
		int(4 ����Ʈ) ��� long long(8����Ʈ)�� ����Ѵ�. */
		vector<long long> prices;
		long long price;
		for (int i = 0; i < N; i++) {
			cin >> price;
			prices.push_back(price);
		}
		long long sum = 0;
		int max_idx = N - 1;
		while (max_idx > 0) {
			long long max = prices[max_idx];
			int i;
			for (i = max_idx - 1; i >= 0 && prices[i] <= max; i--)
				sum += (max - prices[i]);
			max_idx = i;
		}
		cout << "#" << test_case << " " << sum << '\n';
	}
	return 0;
}