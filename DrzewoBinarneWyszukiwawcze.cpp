//Project is not complete.

#include <iostream>

using namespace std;

struct Node {
	int key;
	int data;
	Node *left;
	Node *right;
	Node *parent;
};

void wybor(char wejscie);
void dodaj(char data);
void minimum();
void maximum();
void coDrugi();
void coDrugiNast();
int wysokosc();

int main()
{
	char we = NULL;
    cout << "Hello World!\n"; 


	while (we != 'q') {
		cin >> we;
		wybor(we);
	}

}

void dodaj(char data) {

}

void minimum() {

}

void maximum() {

}

void coDrugi() {

}

void coDrugiNast() {

}

int wysokosc() {

	return h;
}

void wybor(char wejscie) {
	switch (wejscie)
	{
	case '+':
		char data;
		cin >> data;
		dodaj(data);
		break;

	case '<':
		minimum();
		break;

	case '>':
		maximum();
		break;

	case 'h':
		
		break;

	case '1':

		break;

	case '2':

		break;

	default:
		break;
	}
}
