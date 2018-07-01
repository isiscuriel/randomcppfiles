// CS124Assignment10.cpp : Defines the entry point for the console application.
//
/*
Name:Isis Curiel
Date:04/05/2017
Assignment 10
Instructions:
Redo assignment 5 by

1. Defining a class Date that has

(1) Three member variables:

date,
month,
year
(2) member functions

constructor:  Initializes the Date to the given month, day and 
year or to the default value. you can overload the constructor,
or use default arguments.

example use:

Date today(3,31, 2017);  // 03/31/2017

Date firstDay;  // will be 01/01/2017

reset: reset the  month, day and year based on the parameters. So today.reset(4,1,2017); will change today to 04/01/2017.
get_day_of_week: return the day of the week as int 0-6
get_day_of_week_name: return the day of the week as a string
print: print out the date information include the date, month, year, day of the week.
(3) helper funcions:

bool is_leap_year();

// Returns true if the given year is a leap year

int get_century_value();

// Returns a value computed from the century of the year

int get_year_value();

// Returns a value computed based on the years since the beginning of the century.

int get_month_value();

// Returns a value (from a table) for the Date's month

2. write a main function to test the class.
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Date {

private:

	int date, month, year, newDate, newMonth, newYear;


	/*
reset: reset the  month, day and year based on the parameters. So today.reset(4,1,2017); will change today to 04/01/2017.
get_day_of_week: return the day of the week as int 0-6
get_day_of_week_name: return the day of the week as a string
print: print out the date information include the date, month, year, day of the week.
	 */

public:
	Date() {
		month = 01;
		date = 01;
		year = 2017;
	}
	Date(int fmonth, int fdate, int fyear) {
		month = fmonth;
		date = fdate;
		year = fyear;

	}
	bool is_leap_year(int year) {
		if (((year % 4 == 0) && (!(year % 100 == 0))) || ((year % 400 == 0)))
		{
			////isLeapYear = true;
			return true;
		}
		else
			return false;
	}

	int get_century_value(int year) {

		int centValue;
		year = year / 100;
		year = year % 4;
		year = 3 - year;
		year = year * 2;
		centValue = year;
		return centValue;
	}

	int get_year_value(int year) {

		int y1;
		int yearVal;
		year = year % 100;
		y1 = year / 4;
		yearVal = y1 + year;
		return yearVal;


	}
	int get_month_value(int month, int year) {
		if (month == 1 && is_leap_year(year) == false)
			return 0; ///but doesnt returning 0 cause issues ?
		else if (month == 1 && is_leap_year(year))
			return 6;
		else if (month == 2 && is_leap_year(year) == false)
			return 3;
		else if (month == 2 && is_leap_year(year))
			return 2;
		else if (month == 3)
			return 3;
		else if (month == 4)
			return 6;
		else if (month == 5)
			return 1;
		else if (month == 6)
			return 4;
		else if (month == 7)
			return 6;
		else if (month == 8)
			return 2;
		else if (month == 9)
			return 5;
		else if (month == 10)
			return 0;
		else if (month == 11)
			return 3;
		else if (month == 12)
			return 5;
		else
			return 6;

	}
	int get_day_of_week(int month, int date, int year) {
		int x;
		x = ((date + get_month_value(month, year) + get_year_value(year) + get_century_value(year)) % 7);
		///((getMonthValue + getYearValue + getCenturyValue)%7)
		return x;

	}

	void get_day_of_week_name(int month, int date, int year) {

		if (month > 12 || month < 1) {
			cout << "Try again Please enter a month, day, and year, separated by " <<
				"spaces(e.g., '7 4 2008') :  ";
			cin >> month;
			cin >> date;
			cin >> year;
			get_day_of_week(month, date, year);
			

		}
		else if (month == 2 && date == 29 && is_leap_year(year) == false)
		{
			cout << "Try again Please enter a month, day, and year, separated by " <<
				"spaces(e.g., '7 4 2008') :  ";
			get_day_of_week(month, date, year);
			cin >> month;
			cin >> date;
			cin >> year;
		}
		else if (date > 31 || date < 1) {
			cout << "Try again Please enter a month, day, and year, separated by " <<
				"spaces(e.g., '7 4 2008') :  ";
			cin >> month;
			cin >> date;
			cin >> year;
			get_day_of_week(month, date, year);
			
		}
		else if (month == 4 || month == 7 || month == 9 || month == 11 && date > 30) {
			cout << "Try again Please enter a month, day, and year, separated by " <<
				"spaces(e.g., '7 4 2008') :  ";
			cin >> month;
			cin >> date;
			cin >> year;
			get_day_of_week(month, date, year);
			
		}
		else {
			string dayW;
			if (get_day_of_week(month, date, year) == 0)
				dayW = "Sunday";
			else if (get_day_of_week(month, date, year) == 1)
				dayW = "Monday";
			else if (get_day_of_week(month, date, year) == 2)
				dayW = "Tuesday";
			else if (get_day_of_week(month, date, year) == 3)
				dayW = "Wednesday";
			else if (get_day_of_week(month, date, year) == 4)
				dayW = "Thursday";
			else if (get_day_of_week(month, date, year) == 5)
				dayW = "Friday";
			else if (get_day_of_week(month, date, year) == 6)
				dayW = "Saturday";
			else
				dayW = "INVALID";
			cout << dayW;
		}
	}
		void print() {
			string dayW;
			if (get_day_of_week(month, date, year) == 0)
				dayW = "Sunday";
			else if (get_day_of_week(month, date, year) == 1)
				dayW = "Monday";
			else if (get_day_of_week(month, date, year) == 2)
				dayW = "Tuesday";
			else if (get_day_of_week(month, date, year) == 3)
				dayW = "Wednesday";
			else if (get_day_of_week(month, date, year) == 4)
				dayW = "Thursday";
			else if (get_day_of_week(month, date, year) == 5)
				dayW = "Friday";
			else if (get_day_of_week(month, date, year) == 6)
				dayW = "Saturday";
			else
				dayW = "INVALID";

			cout << "Today is  " << dayW << " " << month <<
				" " << date << " " << year << endl; //prints out day and full date 
		}
		void reset(int newDate,int newMonth, int  newYear) {
			
			newDate = date;
			newMonth = month;
			newYear = year;
		}
	
};



int main()
{

	Date today(3,31,2017);  // 03/31/2017
	today.print();
	Date firstDay; // will be 01/01/2017
	firstDay.print();
	Sleep(50000);
    return 0;
}
