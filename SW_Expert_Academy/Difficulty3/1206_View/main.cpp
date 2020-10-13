#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

/* Problem #1206 View */
int main(int argc, char** argv)
{
	int test_case;
	/*
	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
	*/
	freopen("input.txt", "r", stdin);
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= 10; ++test_case)
	{
		int width, sum = 0, cur;
		short height[1000];
		cin >> width;
		for (int i = 0; i < width; i++)
			cin >> height[i];
		/* (�ش� ĭ�� ������ �ǹ����� �������� Ȯ���� ���� ��)
		* = (�ش� ĭ�� ������ �ǹ� ����)
		*	- (���� �� ĭ, ������ �� ĭ�� ������ �ǹ� �� ���� ���� �ǹ��� ����) */
		for (int i = 2; i < width - 2; i++) {
			cur = height[i] - max(max(height[i - 2], height[i - 1]), max(height[i + 1], height[i + 2]));
			if (cur > 0)
				sum += cur;
		}
		cout << "#" << test_case << " " << sum << endl;
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}