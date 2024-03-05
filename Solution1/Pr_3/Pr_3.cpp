// Pr_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <locale>
#include <iostream>
#include <iomanip>
using namespace std;

int linSearch(int arr[], int requiredKey, int size);
void showArr(int arr[], int size); 

int main()
{
	setlocale(LC_CTYPE, "ukr");

	
	const int size = 10;
	int arr[size];
	int reqKey = 0; 
	int numElement = 0;
	srand(time(NULL));

	
	

	for (int i = 0; i < size; ++i)
	{
		cout << "¬ведiть числo: ";
		cin >> arr[i];
	}

	showArr(arr, size);

	cout << "яке число потр≥бно шукати? ";
	cin >> reqKey; 

	
	numElement = linSearch(arr, reqKey, size);

	if (numElement != -1)
	{
		
		cout << "«наченн€ " << reqKey << " знаходитьс€ в осередку з iндексом: " << numElement << endl;
	}
	else
	{
		
		cout << "” масив≥ немаЇ такого значенн€" << endl;
	}
	return 0;
}


void showArr(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << setw(4) << arr[i];
		
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}

	}
	
}


int linSearch(int arr[], int requiredKey, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == requiredKey)
			return i;
	}
	return -1;

}

