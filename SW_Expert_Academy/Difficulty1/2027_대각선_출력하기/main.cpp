#include<iostream>

using namespace std;

/* Problem #2027 �밢�� ����ϱ� */
int main(int argc, char** argv)
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j)
                cout << "#";
            else
                cout << "+";
        }
        cout << endl;
    }
    return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}