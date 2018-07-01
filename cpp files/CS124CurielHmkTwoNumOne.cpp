// CS124CurielHmkTwoNumOne.cpp : Defines the entry point for the console application.
//
/*
Name:Isis Curiel
Course:CS124
Instructions:
1. Write a program that computes the cost of a long-distance call. The cost of
the call is determined according to the following rate schedule:
a. Any call started between 8:00 am and 6:00 pm, Monday through Friday,
is billed at a rate of $0.40 per minute.
b. Any call starting before 8:00 am or after 6:00 pm, Monday through
Friday, is charged at a rate of $0.25 per minute.
c. Any call started on a Saturday or Sunday is charged at a rate of $0.15 per
minute.
The input will consist of the day of the week, the time the call started, and
the length of the call in minutes. The output will be the cost of the call. The
time is to be input in 24-hour notation, so the time 1:30 pm is input as
13:30
The day of the week will be read as one of the following pairs of character
values, which are stored in two variables of type char: 
Mo Tu We Th Fr Sa Su
Be sure to allow the user to use either uppercase or lowercase letters or a
combination of the two. The number of minutes will be input as a value
of type int. (You can assume that the user rounds the input to a whole
number of minutes.) Your program should include a loop that lets the user
repeat this calculation until the user says she or he is done.

*/
#include "stdafx.h"
#include <iostream>
#include <string> 
using namespace std; 


int main()
{
	
	char firstLetter; /// stores the 1st letter of the day
	char secondLetter; /// stores the 2nd letter of the day
	int durationOfCall; /// stores the length of the call in minutes
	int timeH; ///stores the input of the hour 
	char colon; /// stores the input of the colon 
	int timeM; /// stores the input of the minutes 
	double cost; // stores the final price of the call 
	char ans = 'Y'; /// stores the answer of if the user wants to repeat the calculation
	while (ans == 'y' || ans == 'Y') {

		cout << "Please enter the day of the week in two letter format. Ex: Mo Tu We Th Fr Sa Su" << endl; // prompts user for input 
		cin >> firstLetter >> secondLetter; /// take user input 
		cout << endl;
		cout << "Please enter the duration of the call in minutes." << endl; // prompts user for input 
		cin >> durationOfCall; /// take user input
		cout << endl;
		cout << "Please enter the time of the call in 24 hour notation. Ex: 5:00 pm would be entered as 17:00 " << endl; // prompts user for input 
		cin >> timeH >> colon >> timeM; /// take user input 
		cout << endl;

		/*
		the following if else statements are used to determine the price of a long call diatance call
		checking the day of the week and checking the hour the call was made to determine the cost.
		*/


		if ((firstLetter == 'M' || firstLetter == 'm') && (secondLetter == 'O' || secondLetter == 'o')) {
			if (timeH < 8 || timeH > 18) {
				cost = durationOfCall*.25; 
				///if it is a business day and the call is before 8 am or 6 pm the call is 25 cents per minute 
			}
			else
			{
				cost = durationOfCall *.40;
				/// if it is a business day and the call is not before 8 am or 6 pm the call is 40 cents per minute 
			}
		} //end if 

		else if ((firstLetter == 'T' || firstLetter == 't') && (secondLetter == 'U' || secondLetter == 'u')) {
			if (timeH < 8 || timeH > 18) {
				cost = durationOfCall*.25;
				///if it is a business day and the call is before 8 am or 6 pm the call is 25 cents per minute 
			}
			else
			{
				cost = durationOfCall * .40;
				/// if it is a business day and the call is not before 8 am or 6 pm the call is 40 cents per minute 
			}
		}
		else if ((firstLetter == 'W' || firstLetter == 'w') && (secondLetter == 'E' || secondLetter == 'e')) {
			if (timeH < 8 || timeH > 18) {
				cost = durationOfCall*.25;
				///if it is a business day and the call is before 8 am or 6 pm the call is 25 cents per minute 
			}
			else
			{
				cost = durationOfCall * .40;
				/// if it is a business day and the call is not before 8 am or 6 pm the call is 40 cents per minute 
			}
		}
		else if ((firstLetter == 'T' || firstLetter == 't') && (secondLetter == 'H' || secondLetter == 'h')) {
			if (timeH < 8 || timeH > 18) {
				cost = durationOfCall*.25;
				///if it is a business day and the call is before 8 am or 6 pm the call is 25 cents per minute 
			}
			else
			{
				cost = durationOfCall *.40;
				/// if it is a business day and the call is not before 8 am or 6 pm the call is 40 cents per minute 
			}
		}
		else if ((firstLetter == 'F' || firstLetter == 'f') && (secondLetter == 'r' || secondLetter == 'R')) {
			if (timeH < 8 || timeH > 18) {
				cost = durationOfCall*.25;
				///if it is a business day and the call is before 8 am or 6 pm the call is 25 cents per minute 
			}
			else
			{
				cost = durationOfCall * .40;
				/// if it is a business day and the call is not before 8 am or 6 pm the call is 40 cents per minute 
			}
		}
		else {
			cost = durationOfCall*.15;
			// or else if the call is on the weekend not matter what time the cost is 15 cents per minute 
		}
		cout << "Your total is $" << cost << "."<<endl; ///prints out the total cost of call 
		cout << "Would you like to continue? Please enter Y or y to continue."; // prompts user to continue
		cin >> ans; // take in answer

	} /// end while loop 
	system("pause");
    return 0;
}

