// KopiecOdwracalny.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char we=NULL;
	int weint;
	int konwerter;
	int kopiec;									//placeholder dla prawdopodobnie listy tj kopca
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

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
