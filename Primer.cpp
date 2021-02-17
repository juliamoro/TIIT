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
        cout << "\tМеню:" << endl;
        cout << "Выберите пункт:" << endl;
        cout << "1 - Добавление в начало" << endl;
        cout << "2 - Добавление в конец" << endl;
        cout << "3 - Удаление с начала" << endl;
        cout << "4 - Удаление с конца" << endl;
        cout << "5 - Узнать значение первого элемента(не удаляя его)" << endl;
        cout << "6 - Узнать значение последнего элемента(не удаляя его)." << endl;
        /*cout << "7 - Выход" << endl;*/
        cout << "0 - Очистить экран" << endl;
        cout << "\t";
        cin >> s;

        switch (s)
        {
        case 0:
            system("cls");
            break;
        case 1:
            cout << "Введите число:\t";
            cin >> n;
            if (d.push_front(n) == 1)
                cout << "Full" << endl;
            cout << endl;
            break;
        case 2:
            cout << "Введите число:\t";
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
            cout << "Такого пункта нет!" << endl;
            break;
        }
    }
    return 0;
}