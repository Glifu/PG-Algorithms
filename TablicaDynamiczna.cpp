#include <iostream>

using namespace std;

struct para {
	int l;
	int p;
};

int main()
{
	int ilosc;
	int we;
	para *tab;
	cin >> ilosc;
	tab = new para[ilosc+1];

	for (int i = 0; i < ilosc; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> we;
			if (j == 0) {
				tab[i].l=we;
			}
			else {
				tab[i].p=we;
			}
		}
	}
	cout << "Tryb" << endl;
	cin >> we;

	for (int i = 0; i < ilosc; i++) {
		for (int j = i; j < ilosc-1; j++) {
			if (tab[j].l <= tab[j+1].l) {
				int temp;
				temp = tab[j].l;
				tab[j].l = tab[j + 1].l;
				tab[j + 1].l = temp;
			}
		}
	}
	if (we == 0) {
		for (int i = ilosc-1; i > 0; i--) {
			cout << tab[i].l << " " << tab[i].p << endl;
		}
	}
	if (we == 1) {

	}

	cout << "Hello World!\n";
}