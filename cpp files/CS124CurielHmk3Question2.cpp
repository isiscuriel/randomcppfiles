// CS124CurielHmk3Question2.cpp : Defines the entry point for the console application.
//
/*
Name:Isis Curiel
Course:CS124
Date:2/15/18
Instructions:
Write a program that asks for the user’s height, weight, and age, and then
computes clothing sizes according to the formulas:
   Hat size = weight in pounds divided by height in inches and all that
   multiplied by 2.9.
   Jacket size (chest in inches) = height times weight divided by 288 and then
   adjusted by adding 1/8 of an inch for each 10 years over age 30. (Note
   that the adjustment only takes place after a full 10 years. So, there is no
   adjustment for ages 30 through 39, but 1/8 of an inch is added for age 40.)
   Waist in inches = weight divided by 5.7 and then adjusted by adding
   1/10 of an inch for each 2 years over age 28. (Note that the adjustment
   only takes place after a full 2 years. So, there is no adjustment for age 29,
   but 1/10 of an inch is added for age 30.)
   Use functions for each calculation. Your program should allow the user to
   repeat this calculation as often as the user wishes
   */

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
 
//Precondition weight and height > 0 
double hatSize(double weight, double height) {
	double hatS = (weight / height)*2.9; ///Hat size = weight in pounds 
										 ///divided by height in inches and all that multiplied by 2.9.
	cout << "Hat Size = " << hatS << fixed << setprecision(2) << endl;
	return hatS;
} //Post condition return hat size

///Precondition weight, height, and age > 0 
double jacketSize(double height, double weight, double age) {
	double jackS = (height*weight) / 288;
	if (age >= 40) ///adjusted by adding 1/8 of an inch for each 10 years 
				   //over age 30. only takes place after a full 10 years.
	{
		double numTimes = (age / 10) - 3;
		jackS += (numTimes * 0.125);
	}
	cout << "Jacket size = " << jackS << fixed << setprecision(2) << endl;
	return jackS;
} /// Post condition return jacket size 

  ///Precondition weight, height, and age > 0 
double waistSize(double weight, double age) {
	double waistS = weight / 5.7;
	if (age >= 30) ///Waist in inches = weight divided by 5.7 and then adjusted by 
					///adding 1 / 10 of an inch for each 2 years over age 28.
				    ///(note that the adjustment only takes place after a full 2 years.
				    ///So, there is no adjustment for age 29, but 1 / 10 of an inch is added for age 30.)
	{
		double numTimes = (age / 2.0) - 14;
		waistS += (numTimes * 0.1);
	}
	cout << "Waist size = " << waistS << fixed << setprecision(2) << endl;
	return waistS;
} /// Post condition return waist size 

double waistSize(double weight, int age);

int main()
{
	double height;
	double weight;
	double age;
	char ans;


	do {
		cout << "Give me your height in inches, weight in pounds, \n"
			<< "and age in years and I will give you your hat size,\n"
			<< "jacket size(inches at chest) and your waist size in \n"
			<< "inches.\n" << endl; ///prompts user for input

		cin >> height;
		cin >> weight;
		cin >> age; ///takes in input 

		cout << "\n";

		hatSize(weight, height);
		jacketSize(height, weight, age);
		waistSize(weight, age);

		cout << "enter Y or y to repeat, any other character ends."<<endl; // prompts user for input
		cin >> ans; ///takes in input
	} /*end do while*/ while (ans == 'y' || ans == 'Y'); // exits loop if ans not equal to y or Y


	return 0;
}





