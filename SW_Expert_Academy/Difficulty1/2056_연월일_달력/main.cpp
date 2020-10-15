#include<iostream>

using namespace std;

/* Problem #2056 ������ �޷� */
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
        int raw, year, month, day;
        bool valid;
        cin >> raw;
        day = raw % 100;
        raw /= 100;
        month = raw % 100;
        year = raw / 100;
        valid = true;
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day == 0 || day > 31)
                valid = false;
            break;
        case 2:
            if (day == 0 || day > 28)
                valid = false;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day == 0 || day > 30)
                valid = false;
            break;
        default:
            valid = false;
        }
        cout << "#" << test_case << " ";
        if (valid) {
            if (year >= 1000)
                cout << year;
            else if (year >= 100)
                cout << "0" << year;
            else if (year >= 10)
                cout << "00" << year;
            else
                cout << "000" << year;
            cout << "/";
            if (month >= 10)
                cout << month;
            else
                cout << "0" << month;
            cout << "/";
            if (day >= 10)
                cout << day;
            else
                cout << "0" << day;
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}