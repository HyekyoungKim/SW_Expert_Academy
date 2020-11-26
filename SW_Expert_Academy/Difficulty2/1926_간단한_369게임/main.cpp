#include<iostream>
#include<cstdio>

using namespace std;

/* ���� n�� �ִ� 3 �Ǵ� 6 �Ǵ� 9�� ������ ��ȯ�ϴ� �Լ� */
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

/* Problem #1926 ������ 369���� */
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