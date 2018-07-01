// CS124CurielHmk3Question4.cpp : Defines the entry point for the console application.
//
/*
Name:Isis Curiel
Course: CS124
Instructions:
4. Write a program that outputs the lyrics for the song “Ninety-Nine Bottles
of Beer on the Wall.” Your program should print the number of bottles in
English, not as a number. For example:
248 Chapter 4 / Procedural Abstraction and Functions That Return a Value
Ninety-nine bottles of beer on the wall,
Ninety-nine bottles of beer,
Take one down, pass it around,
Ninety-eight bottles of beer on the wall.
...
One bottle of beer on the wall,
One bottle of beer,
Take one down, pass it around,
Zero bottles of beer on the wall.
Design your program with a function that takes as an argument an integer
between 0 and 99 and returns a string that contains the integer value in
English. Your function should not have 100 different if-else statements!
Instead, use % and / to extract the tens and ones digits to construct the English
string. You may need to test specifically for values such as 0, 10–19, etc.
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std; 


int main()
{
	int firstDigit, secondDigit, bottles = 99;
	string line1, line2, line3, line4, altLine1, altLine2, altLine4, secondDigitText, ones, twenty, thirty, forty, fifty, sixty, seventy, eighty, ninety;

	altLine1 = " bottle of beer on the wall,"; //used when down to 1 bottle rather than use plural
	altLine2 = " bottle of beer,"; //used when down to 1 bottle rather than use plural
	line3 = "Take one down, pass it around,";
	altLine4 = " bottle of beer on the wall."; //used when down to 1 bottle rather than use plural

	for (int a = bottles; a >= 0; a--)
	{
		firstDigit = bottles / 10; //get the first digit of the number of bottles remaining
		secondDigit = bottles % 10; //get the second digit of the number of bottles remaining
		line1 = " bottles of beer on the wall.";
		line2 = " bottles of beer,";
		line4 = " bottles of beer on the wall.";

		//specify correct text rather than a blank string when bottles reached zero
		if (bottles != 0) secondDigitText = funcSecondDigit(secondDigit);
		else secondDigitText = "Zero";

		//examine the first digit and display the correct output.  Calls function to calculate text to display for 2nd digit
		switch (firstDigit)
		{
		case 0:
		{
			//use singular version if only 1 bottle left
			if (funcSecondDigit(secondDigit) == "One")
			{
				line1 = altLine1;
				line2 = altLine2;
			}
			cout << secondDigitText << line1 << endl << secondDigitText <<
				line2 << endl << line3 << endl << secondDigitText << line4 << endl;
			break;
		}
		case 1:
		{
			ones = funcFirstDigit(firstDigit, secondDigit);
			cout << ones << line1 << endl << ones << line2 << endl << line3 << endl << ones << line4 << endl;
			break;
		}
		//in cases 2 through 9, "if" statement required as we don't need the dash if the remaining bottles is divisible by 10
		case 2:
		{
			if (secondDigit == 0) twenty = "Twenty";
			else twenty = "Twenty-";
			cout << twenty << secondDigitText << line1 << endl << twenty << secondDigitText <<
				line2 << endl << line3 << endl << twenty << funcSecondDigit(secondDigit) << line4 << endl;
			break;
		}
		case 3:
		{
			if (secondDigit == 0) thirty = "Thirty";
			else thirty = "Thirty-";
			cout << thirty << secondDigitText << line1 << endl << thirty << secondDigitText <<
				line2 << endl << line3 << endl << thirty << secondDigitText << line4 << endl;
			break;
		}
		case 4:
		{
			if (secondDigit == 0) forty = "Forty";
			else forty = "Forty-";
			cout << forty << secondDigitText << line1 << endl << forty << secondDigitText <<
				line2 << endl << line3 << endl << forty << secondDigitText << line4 << endl;
			break;
		}
		case 5:
		{
			if (secondDigit == 0) fifty = "Fifty";
			else fifty = "Fifty-";
			cout << fifty << secondDigitText << line1 << endl << fifty << secondDigitText <<
				line2 << endl << line3 << endl << fifty << secondDigitText << line4 << endl;
			break;
		}
		case 6:
		{
			if (secondDigit == 0) sixty = "Sixty";
			else sixty = "Sixty-";
			cout << sixty << secondDigitText << line1 << endl << sixty << secondDigitText <<
				line2 << endl << line3 << endl << sixty << secondDigitText << line4 << endl;
			break;
		}
		case 7:
		{
			if (secondDigit == 0) seventy = "Seventy";
			else seventy = "Seventy-";
			cout << seventy << secondDigitText << line1 << endl << seventy << secondDigitText <<
				line2 << endl << line3 << endl << seventy << secondDigitText << line4 << endl;
			break;
		}
		case 8:
		{
			if (secondDigit == 0) eighty = "Eighty";
			else eighty = "Eighty-";
			cout << eighty << secondDigitText << line1 << endl << eighty << secondDigitText <<
				line2 << endl << line3 << endl << eighty << secondDigitText << line4 << endl;
			break;
		}
		case 9:
		{
			if (secondDigit == 0) ninety = "Ninety";
			else ninety = "Ninety-";
			cout << ninety << secondDigitText << line1 << endl << ninety << secondDigitText <<
				line2 << endl << line3 << endl << ninety << secondDigitText << line4 << endl;
			break;
		}
		}

		bottles--;
		cout << endl; //separate each verse with a blank line
	}

	return 0;
}

//bring in first digit from number of bottles remaining to check for special case of teens, etc
//returns that digit in correct text form	
string funcFirstDigit(int firstDigit, int secondDigit)
{
	string text;

	if (firstDigit == 1) //only need to do the following if the number of bottles left is between 10 and 19 (inclusive)
	{
		switch (secondDigit)
		{
		case 0: text = "Ten";
			break;
		case 1: text = "Eleven";
			break;
		case 2: text = "Twelve";
			break;
		case 3: text = "Thirteen";
			break;
		case 4: text = "Fourteen";
			break;
		case 5: text = "Fifteen";
			break;
		case 6: text = "Sixteen";
			break;
		case 7: text = "Seventeen";
			break;
		case 8: text = "Eighteen";
			break;
		case 9: text = "Nineteen";
		}

		return text;
	}
}

//brings in second digit from number of bottles remaining
//returns that digit in text form
string funcSecondDigit(int digit)
{
	string text;

	switch (digit)
	{
	case 0: text = "";
		break;
	case 1: text = "One";
		break;
	case 2:	text = "Two";
		break;
	case 3: text = "Three";
		break;
	case 4: text = "Four";
		break;
	case 5: text = "Five";
		break;
	case 6: text = "Six";
		break;
	case 7: text = "Seven";
		break;
	case 8: text = "Eight";
		break;
	case 9: text = "Nine";
	}

	return text;
}

