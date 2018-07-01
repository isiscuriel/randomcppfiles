//#include "stdafx.h"
#include <iostream>
using namespace std; 
/*
Name:Isis Curiel
Course: CS124 
Instructions:
Question 1: A metric ton is 35,273.92 ounces. Write a program that will read
the weight of a package of breakfast cereal in ounces and output the weight in
metric tons as wells as the number of boxes yield 1 metric ton of cereal. Your
program should allow the user to repeat this calculation as often as the user
wishes.
*/

int main() {

	int bCOunces; //stores # of ounces of breakfast cereal 
	double bCTons;  // stores the amount of breakfast cereal in tons 
	double numOfBC; //stores # of  breakfast cereal boxes 
	char ans;


	cout << "Please input the weight of a package of breakfast cereal in ounces:" << endl; //prompt user for input bCOunces
	cin >> bCOunces;
	bCTons = bCOunces / (35273.92); //calculates breakfast cereal in tons 
	numOfBC = (35273.92 / bCOunces); //calculates # of boxes 
	cout << "The weight of the cereal in metric tons is: " << bCTons << endl; // displays bCtons
	cout << numOfBC << "is the number of boxes that yield 1 metric ton of cereal." << endl;  //displays numOfBC
	cout << "Would you like to do this again? Please input Y/N." << endl; //prompts user for ans  
	cin >> ans;
	if (ans == 'y' || ans == 'Y') { /// repeats program if answer is y or Y  
		cout << "Please input the weight of a package of breakfast cereal in ounces:"; //prompt user for input
		cin >> bCOunces;
		bCTons = bCOunces / (35273.92); //calculates breakfast cereal in tons 
		numOfBC = (35273.92 / bCOunces);//calculates # of boxes 
		cout << "The weight of the cereal in metric tons is: " << bCTons << endl;// displays bCtons
		cout << numOfBC << " is the number of boxes that yield 1 metric ton of cereal." << endl;//displays numOfBC
		cout << "Would you like to do this again? Please input Y/N. " << endl;//prompts user for ans 
		cin >> ans;
	}
	if (ans == 'n' || ans == 'N') { //ends program if answer is n or N 
		return 0; 
	}

	






}//end main 