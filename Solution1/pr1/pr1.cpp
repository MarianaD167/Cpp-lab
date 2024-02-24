// pr1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <locale>
using namespace std;


void z1() {

	int n1 = 1;
	int n2 = 2;
	int n3 = 3;

	if (1<=n1 && n1<=6 ) {
		cout << n1 << " ";
	}

	if (1 <= n2 && n2 <= 6) {
		cout << n2 << " ";
	}

	if (1 <= n3 && n3 <= 6) {
		cout << n3;
	}

}

void z2() {

	int n1 = 1;
	int n2 = 2;
	int n3 = 3;

	if (n1 < n2 && n1 < n3) {
		cout << n1;
	}

	if (n2 < n1 && n2 < n3) {
		cout << n2;
	}

	if (n3 < n1 && n3 < n2) {
		cout << n3;
	}
}


void z3 (){

	int num;
	cout << "Введiть кiлькiсть: ";
	cin >> num;

	double sum = 0;
	double n = 1;

	for (int i = 0; i < num; ++i) {
		cout << n;
		sum += n;
		n /= 2;
	}

	cout << endl;
	cout << "Сума:" << sum;


}

void z4() {
	 
	int n = 8;
	int v = 2;

	while (n % v != 0) {
		++v;
	}
	cout << "Найменший дiльник:" << v;
	

}


void z5() {

	int n;
	cout << "Введiть кiлькiсть елементiв послдовност Фiбоначчi: ";
	cin >> n;

	int a = 0;
	int	b = 1;
	int nextTerm;

	cout << "Послiдовнiсть Фiбоначчi: ";

	for (int i = 1; i <= n; ++i) {
		
		cout << a << " ";
		nextTerm = a + b;
		a = b;
		b = nextTerm;
	}
	cout << endl;

}

void z6() {

	srand(time(0));
	int a = 1 + rand() % 20;

	for (int i = 1;true;++i) {
	
    int num;
	cout << "Введiть число вiд 1 - 20:";
	cin >> num;

	if (num > a) {
		cout << "Запропоноване число менше задуманого";
	}

	if (num < a) {
		cout << "Запропоноване число бiльше задуманого";
	}

	if (num == a) {
		cout << "Ви вгадали число з "<< i <<"разу";
		break;
	}

	}

	
}


int main()
{
	setlocale(LC_CTYPE, "ukr");
	z6();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
