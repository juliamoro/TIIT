#include "Dec.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    dek d;
    int s;
    int n;
    while (true)
    {
        cout << "\t����:" << endl;
        cout << "�������� �����:" << endl;
        cout << "1 - ���������� � ������" << endl;
        cout << "2 - ���������� � �����" << endl;
        cout << "3 - �������� � ������" << endl;
        cout << "4 - �������� � �����" << endl;
        cout << "5 - ������ �������� ������� ��������(�� ������ ���)" << endl;
        cout << "6 - ������ �������� ���������� ��������(�� ������ ���)." << endl;
        /*cout << "7 - �����" << endl;*/
        cout << "0 - �������� �����" << endl;
        cout << "\t";
        cin >> s;

        switch (s)
        {
        case 0:
            system("cls");
            break;
        case 1:
            cout << "������� �����:\t";
            cin >> n;
            if (d.push_front(n) == 1)
                cout << "Full" << endl;
            cout << endl;
            break;
        case 2:
            cout << "������� �����:\t";
            cin >> n;
            if (d.push_back(n) == 1)
                cout << "Full" << endl;
            cout << endl;
            break;
        case 3:
            if (d.pop_front() == 3)
                cout << "Pust" << endl;
            else
            cout << d.pop_front() << endl;
            break;
        case 4:
            if (d.pop_back() == 3)
                cout << "Pust" << endl;
            else
                cout << d.pop_back() << endl;
            break;
        case 5:
            cout << d.front() << endl;
            break;
        case 6:
            cout << d.back() << endl;
            break;

        case 7:
            cout << "bye\n";
            return 0;
            break;

        default:
            cout << "������ ������ ���!" << endl;
            break;
        }
    }
    return 0;
}