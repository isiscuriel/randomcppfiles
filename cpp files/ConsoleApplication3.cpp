// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int posNum = 0;
	int negNum = 0;
	int num;
	int sum = 0;
	cout << "Please enter ten numbers:";
	for (int i = 0; i < 10; i++) {
		cin >> num;
		sum += num;
		if (num > 0) {
			posNum += num;
		}
		else {
			negNum += num;
		}
	}
	cout << "The sum of positive numbers are  " << posNum << endl;
	cout << "The sum of negative numbers are " << negNum << endl;
	cout << "The sum of all the numbers is " << sum << endl;
	system("PAUSE");

    return 0;
}

