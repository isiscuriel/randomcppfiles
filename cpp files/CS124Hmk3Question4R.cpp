// CS124Hmk3Question4R.cpp : Defines the entry point for the console application.
//
/*
4. Write a program that tells what coins to give out for any amount of change from 1 cent to 99 cents.
For example, if the amount is 86 cents, the output would be something like the following:
86 cents can be given as 3 quarter(s) 1 dime(s) and 1 penny(pennies)
Use coin denominations of 25 cents (quarters), 10 cents (dimes), and 1 cent
(pennies). Do not use nickel and half-dollar coins. Your program will use the following function (among others):
void compute_coins(int coin_value, int& num, int& amount_left); 
//Precondition: 0 < coin_value < 100; 0 <= amount_left < 100. 
//Postcondition: num has been set equal to the maximum number 
//of coins of denomination coin_value cents that can be obtained 
//from amount_left. Additionally, amount_left has been decreased 
//by the value of the coins, that is, decreased by 
//num * coin_value.
For example, suppose the value of the variable amount_left is 86. 
Then, after the following call, the value of number will be 3 and the value of amount_left will be 11 
(because if you take 3 quarters from 86 cents, that leaves 11 cents):compute_coins(25, number, amount_left);
Include a loop that lets the user repeat this computation for new input values until the user says he or she 
wants to end the program. (Hint: Use integer division and the % operator to implement this function.)
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
///	Precondition: amount_left greater than 0, 
void compute_coins(int coin_value, int& num, int& amount_left) {
	num = amount_left / coin_value; // # of coins is the int division of amount_left and the coin value 
	amount_left = amount_left % coin_value; /// the amount left is the remainder of amont left and the coin value 
}
/// Postcondition: the num and amount_left are calculated
int main()
{
	int quarters, dimes, pennies, change; /// stores the amount of quarters,dimes,pennies, and change 
	char ans; // stores ans from user
	do {
		cout << "Please input an amount of change between 1-99"<<endl;
		cin >> change;
		compute_coins(25, quarters, change); /// calculates amount of quarters to give
		compute_coins(10, dimes, change);///calculates amount of dimes to give
		pennies = change; // the rest of the change would be the pennies 
		cout << "There are " << quarters << " quarter(s)." << endl; ///prints amount of quarters
		cout << "There are " << dimes << " dime(s)." << endl; /// prints the amount of dimes
		cout << "There are " << change << " pennies" << endl; /// print the amount of pennies 
		cout << "Would you like to repeat this calculation? Please enter Y or y to repeat."<< endl;
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	return 0;
}

