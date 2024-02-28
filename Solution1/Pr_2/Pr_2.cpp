// Pr_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
#include <vector>
using namespace std;

void z1() {

	const int N = 16;
	int M = 20;

	cout << M << endl;

	int X[N];
	vector <int> Y;
	
	for (int i = 0; i < N; ++i) {
		X[i] = -50 + rand() % 101;

		cout << X[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < N; ++i) {
		if (abs(X[i]) > M) {
			Y.push_back(X[i]);
		}
	}

	for (int i = 0; i < Y.size(); ++i) {
		cout << Y[i] << " ";

	}
}

void z2() {
	const int N = 16;
	int X[N];

	for (int i = 0; i < N; ++i) {
		X[i] = -50 + rand() % 101;

		cout << X[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < N; ++i){

		if (X[i] < 0) {
			X[i] *= -1;
		}
			cout << X[i] << " ";
		
	}
	
}

void z3() {
	int N[] = { 1000, 500,  200, 100, 50, 20, 10, 5, 2, 1 };

	int sum = 0;
	cout << "¬ведiть суму:";
	cin >> sum;

	for (int i = 0; sum > 0; ++i) {
		while (sum - N[i] >= 0) {
			cout << N[i] << " ";
			sum -= N[i];
		}
	}
}

void z4() {

	const int N = 16;
	int X[N];
	int M[N];
	int B[2*N];

	for (int i = 0; i < N; ++i) {
		X[i] = -50 + rand() % 101;

		cout << X[i] << " ";
	}
	cout << endl;

	

	for (int i = 0; i < N; ++i) {
		M[i] = -50 + rand() % 101;

		cout << M[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < N * 2; ++i) {

		if (i < N) {
			B[i] = X[i];
		}

		else {
			B[i] = M[i - N];
		}
	}

	for (int i = 1; i < N * 2;) {
		if (B[i - 1] > B[i]) {
			int temp = B[i];
			B[i] = B[i - 1];
			B[i - 1] = temp;
			i = 1;
		}
		else {
			i++;
		}
	}

	for (int i = 0; i < N * 2; ++i) {
		cout << B[i] << " ";
	}
}







int main()
{
	setlocale(LC_CTYPE, "ukr");
	z4();

	

}

