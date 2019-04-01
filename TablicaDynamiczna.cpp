﻿// TablicaDynamiczna.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"			//biblioteka visuala
#include <iostream>

using namespace std;

int main()
{
	int *tabDyn;														//wskaznik na tablice dynamiczna (pokazuje element [0])
	int wielkTab=4;														//poczatkowa wielkosc tablicy
	int liczTab=0;														//licznik ile jest elementow tablicy
	int we;																//wejscie

	tabDyn = new int[wielkTab];											//allokujemy pamieci na tablice 4 elementowa

	do {																//randomowa petla aby z banalnym warunkiem gwarantujacym kioniec jej zycia
			cin >> we;													//wczytywanie elementow do tablicy ooraz zwiekszenie licznika ilosic elementow w tablicy ->MUSI byc kontrola, poniewaz przy dynamicznych tablicach latwo o wycieki danych,-
			tabDyn[liczTab] = we;
			cout << liczTab << "--> " << tabDyn[liczTab] << endl;
			liczTab++;
			if (liczTab == wielkTab) {									//warunek spradzajacy czy tablica jest zapelniona po "brzeg"
				int *temp;												//twotrzenie tymczasowej zmiennej ktora wskazywac bedize na tablice kiedy tymczasem stworzymu NOWA! z wielkoscia zwiekszona DWUKROTNIE
				temp = tabDyn;
				tabDyn = new int[wielkTab * 2];
				for (int i = 0; i < wielkTab; i++) {					//po stworzeniu nowej, Lepszej, WIEKSZEJ tablicy kopiujemy elementy do nowej tablicy po czym brutalnie mordujemy TEMP'a a wielkosc na stale zmieniamy bna nowa WIEKSZA LEPSZA!
					tabDyn[i] = temp[i];
				}
				delete temp;
				wielkTab = wielkTab * 2;
			}

	} while (we != 666);


	cout << "\n SPRAWDZENIE\n";
	for (int i = 0; i < liczTab; i++) {
		cout << i+1 << "--> " << tabDyn[i] << endl;						//wypisanie kontrolne
	}
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
