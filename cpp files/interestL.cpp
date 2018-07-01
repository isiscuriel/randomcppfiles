// interestL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <windows.h>
#include <string>

/**
* Displays the number of months it will take to pay off a loan, plus the amount of interest paid.
*
* @author Logan Kulinski
* @version January 13, 2017
*/

#include <stdio.h>

int main(void) {
	//declare variables
	double remainingDebt = 1000.0;
	double interestRate = 0.015;
	int numMonthsPaid = 0;
	double totalInterestPaid = 0.0;

	//loop while remainingDebt is greater than zero
	for (; remainingDebt > 0.0; numMonthsPaid++) {
		//calculate interest paid this month
		double interestPaid = remainingDebt * interestRate;

		//add interestPaid to totalInterestPaid
		totalInterestPaid += interestPaid;

		//determine if remainingDebt is less than fifty
		if (remainingDebt < 50.0) {
			//set remainingDebt equal to zero
			remainingDebt = 0.0;
		}
		else {
			//calculate debt deduction
			double debtDeduction = 50.0 - interestPaid;

			//subtract debtDeduction from remainingDebt
			remainingDebt -= debtDeduction;
		} //end if
	} //end for

	  //display numMonthsPaid
	printf("Number of months paid on the loan: %d\n", numMonthsPaid);

	//display totalInterestPaid
	printf("Total interest paid: $%.2f\n", totalInterestPaid);
	Sleep(5000);
	return 0;
	
} //main