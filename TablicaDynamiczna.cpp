// Sortowanie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
// 6. In the future, to open this project again, go to File > Open > Project and select the .sln file
