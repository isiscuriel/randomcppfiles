// Chap2SelfTestQ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
	int x;

	cout << "Give a number\n";
	cin >> x;

	if (x > 100)
		cout << "HIGH\n";
	else
		cout << "LOW\n";

	double n;
	do {
		cout << "Input a postive number\n";
		cin >> n;
	} while (n < 0);

	double guess;
	double r;


	guess = (n /2);

	int counter = 0;
	while (counter < 100)
	{
		r = n / guess;
		guess = (guess + r) / 2;
		counter++ ;
	}

	cout <<"The square root is about " << guess;

	





		Sleep(5000);

    return 0;
}

