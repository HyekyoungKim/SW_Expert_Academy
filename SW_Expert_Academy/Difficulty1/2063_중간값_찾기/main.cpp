#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/* Problem #2063 �߰��� ã�� */
int main(int argc, char** argv)
{
    int N, score;
    vector<int> v;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> score;
        v.push_back(score);
    }
    sort(v.begin(), v.end());
    cout << v.at(N / 2);
    return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}