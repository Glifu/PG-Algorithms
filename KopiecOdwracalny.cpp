#include <iostream>

using namespace std;

int main()
{
	char we=NULL;
	int weint;
	int konwerter;
	int kopiec;									//placeholder dla prawdopodobnie listy tj. kopca
	int wielkopiec=0;


	do {
		cin >> we;
		if (we == '+') {
			// dodanie wartosci
			cin >> weint;
			kopiec = weint;
			wielkopiec = wielkopiec + 1;
		}

		if (we == '-') {
			// usuniecie najwyzszej wartosci oraz wypisanie
			cout << "Usunieta wartosc\n";
			wielkopiec = wielkopiec - 1;
		}

		if (we == 'p') {
			// wypisanie calego kopca
			for (int i = 0; i < wielkopiec; i++) {
				cout << "Kopiec: " << kopiec;
			}
		}

		if (we == 'r') {
			// wyczyszczenie calego kopca + podanie ilosci nowych elementow + podanie tychże elementow
			int n;
			for (int i = 0; i < wielkopiec; i++) {
				kopiec = NULL;
			}
			cin >> n;
			for (int i = 0; i < n; i++) {
				cin >> weint;
				kopiec = weint
			}
		}
		if (we == 's') {
			// zamiana maxymalizujacego na minimalizujacy i odwrotnie
		}

	} while (we != 'q');

    cout << "Hello World!\n"; 
	//konwerter = (int)we;
}

