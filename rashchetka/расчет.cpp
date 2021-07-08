//Определить вид графа Ациклический. Используется метод поиск в глубину

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char t1[] = "test1.txt";
const char t2[] = "test2.txt";

int Test(const char t[]);
bool acuk(int a, int** v, int* m, int n);

int main()
{
	Test(t1);
	Test(t2);
	cout << endl;
}

int Test(const char t[]) {
	setlocale(LC_ALL, "Ru");
	ifstream f, versh;
	int n = 0;

	string str;

	versh.open(t, ios::in);

	while (!versh.eof())
	{
		getline(versh, str);
		n++;
	}

	f.open(t, ios::in);

	int** v = new int* [n];


	for (int i = 0; i < n; i++) {
		v[i] = new int[n];
		for (int j = 0; j < n; j++) {

			f >> v[i][j];
		}
	}

	f.close();

	int* m = new int[n];

	for (int u = 0; u < n; u++) {
		m[u] = 0;
	}

	bool otvet = true;

	for (int u = 0; u < n; u++) {
		if (m[u] == 0) {
			bool voz = acuk(u, v, m, n);
			if (voz == false) {
				otvet = false;			
				break;
			}
		}
	}

	if (otvet == true)
		cout << t << " - ациклический" << endl;
	else
		cout << t << " - цикличный" << endl;
	return 0;
}

bool acuk(int a, int** v, int* m, int n) {
	int shet = 0;
	m[a] = 1;
	for (int i = 0; i < n; i++) {	
		if (v[a][i] != 0) {					
			if (m[i] != 0) {					
				shet++;
				if (shet == 2) {
					return false;
				}
			}
			else {											
				bool b = acuk(i, v, m, n);
				if (b == false) {
					return false;
				}
			}
		}
	}
	return true;
}
