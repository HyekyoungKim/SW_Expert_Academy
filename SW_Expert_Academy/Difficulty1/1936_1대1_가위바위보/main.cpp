#include<iostream>

using namespace std;

/* Problem #1936 Man-to-Man Rock-Paper-Scissors */
int main(int argc, char** argv)
{
	int A, B;
	cin >> A >> B;
	/* ����: 1, ����: 2, ��: 3 */
	if (A - B == 1 || A - B == -2)
		cout << 'A';
	else
		cout << 'B';
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}