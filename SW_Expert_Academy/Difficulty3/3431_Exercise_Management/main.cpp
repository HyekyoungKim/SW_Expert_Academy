#include<iostream>

using namespace std;

/* Problem #3431 ��ȯ���� ����� */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int L, U, X;
		cin >> L >> U >> X;
		cout << "#" << test_case << " ";
		if (X < L) // ���Ѻ��� ���� �� ���
			cout << L - X << endl;
		else if (X >= L && X <= U) // ���Ѱ� ���� ������ ���
			cout << 0 << endl;
		else // ���Ѻ��� ���� �� ���
			cout << -1 << endl;
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}