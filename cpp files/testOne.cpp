// testOne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h> 
using namespace std;

///void calculateCost(int count, float& subTotal, float taxCost);
boolean isPrime(int num);

int main()
{
	/*
///// #23 a. 10 b/c y is first and x is still 3
	int x, y;
	x = -1;
	y = 0;
	while (x <= 3) 
	{
		y += 2;
		x += 1;
	}
	cout << y << endl;

	/// #23 c 
	float tax = 0.0, subtotal = 0.0;

	calculateCost(15, subtotal, tax);

	cout << "The cost for 15 items is  " << subtotal 
		<< " and the tax for " << subtotal << " is " << tax << endl;

	///#23 e 
	int t = 2;
	switch (t)
	{
	case 0:
	case 1:
		cout << t + 1 << endl;
		break;
	case  2: 
		cout << t << endl;
	case 3:
		cout << t + 2 << endl;

	}*/

	/// #24 primeNum 
	int num = 0;
	int counter;
	counter = 0;
	cin >> num;
	for (int i = num; i > 1; i--) {
		if (isPrime(i) == true) {
			counter += 1;
		}
	}

	cout << "Number of primes " << counter << endl;
	

	Sleep(5000);
    return 0;
}
 /*
void calculateCost(int count, float& subTotal, float taxCost) {
	if (count < 10)
		subTotal = count * 0.50;
	else
		subTotal = count * 0.20;
	taxCost = 0.1 * subTotal;
} */


boolean isPrime(int num) {
	if (num == 1 || num == 2) {
		return false;
	}
	else if (num % 2 == 0 && num != 2) {
		return false;
	}
	else
	{
		for (int i = 3; i < num; i++) {
			if (num % i == 0) {
				return false;
			}
			
		}
	}
	return true;
}