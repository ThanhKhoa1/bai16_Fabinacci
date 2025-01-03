// bai16_Fabinacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{
	int so1 = 0, so2 = 1, tong = so1 + so2;
	int soluong;
	cout << "nhap so luong Fabinacci"; cin >> soluong;
	cout << so1 << " " << so2 << " ";
	for (int i = 0; i < soluong - 2; i++) 
	{
		cout << tong << " ";
		so1 = so2;
		so2 = tong;
		tong = so1 + so2;	
	}
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
