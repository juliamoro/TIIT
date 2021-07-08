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
        cout << "\tÌåíþ:" << endl;
        cout << "Âûáåðèòå ïóíêò:" << endl;
        cout << "1 - Äîáàâëåíèå â íà÷àëî" << endl;
        cout << "2 - Äîáàâëåíèå â êîíåö" << endl;
        cout << "3 - Óäàëåíèå ñ íà÷àëà" << endl;
        cout << "4 - Óäàëåíèå ñ êîíöà" << endl;
        cout << "5 - Óçíàòü çíà÷åíèå ïåðâîãî ýëåìåíòà(íå óäàëÿÿ åãî)" << endl;
        cout << "6 - Óçíàòü çíà÷åíèå ïîñëåäíåãî ýëåìåíòà(íå óäàëÿÿ åãî)." << endl;
        /*cout << "7 - Âûõîä" << endl;*/
        cout << "0 - Î÷èñòèòü ýêðàí" << endl;
        cout << "\t";
        cin >> s;

        switch (s)
        {
        case 0:
            system("cls");
            break;
        case 1:
            cout << "Ââåäèòå ÷èñëî:\t";
            cin >> n;
            if (d.push_front(n) == 1)
                cout << "Full" << endl;
            cout << endl;
            break;
        case 2:
            cout << "Ââåäèòå ÷èñëî:\t";
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
            cout << "Òàêîãî ïóíêòà íåò!" << endl;
            break;
        }
    }
    return 0;
}
