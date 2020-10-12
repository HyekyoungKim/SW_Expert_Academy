#include<iostream>
#include<deque>
#include<algorithm>
#include<cstdio>

using namespace std;

/* Problem #1208 Flatten */
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
		int limit, h;
		deque<int> heights;
		cin >> limit;
		for (int i = 0; i < 100; i++) {
			cin >> h;
			heights.push_back(h);
		}
		sort(heights.begin(), heights.end()); // ������������ ����
		bool sort_needed = false;
		int highest, lowest;
		for (int i = 0; i < limit; i++) {
			highest = heights.back();
			lowest = heights.front();
			if (highest - lowest <= 1)
				break;
			heights.pop_front();
			heights.pop_back();
			if (highest - 1 < heights.back() || lowest + 1 > heights.front())
				sort_needed = true;
			heights.push_back(highest - 1);
			heights.push_front(lowest + 1);
			if (sort_needed)
				sort(heights.begin(), heights.end());
		}
		cout << "#" << test_case << " " << heights.back() - heights.front() << endl;
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}