// CS124Assignment8.cpp : Defines the entry point for the console application.
//
/*
Author:Isis Curiel
Date:03/12/2017
Instructions:
Write a program that inputs a time from the console.
The time should be in the format "HH:MM AM" or "HH:MM PM". 
Hours may be one or two digits, for example, "1:10 AM" or "11:30 PM".
Your program should include a function that takes a string parameter 
containing the time. This function should convert the time into a 
four-digit military time based on a 24-hour clock. For example, 
"1:10 AM" would output "0110 hours", "11:30 PM" would output 
"2330 hours", and "12:15 AM" would output "0015 hours".The function 
should return a string to main for writing it out to the console. 
(Do not output the value in the function.) Use C++-Strings for this 
assignment, not C Strings.
*/

#include "stdafx.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void convertMitTime(string hour, string min, string period);

int main()
{
	string regTime;
	string hour;
	string min;
	string period;
	char colon = ':';

	cout << "Please enter the time in 12 hour " <<
		"format with a space between the time and the AM/PM. ";

	getline(cin, hour, colon);
	cin >> min;
	cin >> period;

	convertMitTime(hour, min, period);

	Sleep(10000);


	return 0;
}

void convertMitTime(string hour, string min, string period) {
	string MitTime;
	string nHour;
	if (period == "AM" || period == "am")
	{
		if (hour == "1" || hour == "01")
			hour = "01";
		else if (hour == "2" || hour == "02")
			hour = "02";
		else if (hour == "3" || hour == "03")
			hour = "03";
		else if (hour == "4" || hour == "04")
			hour = "04";
		else if (hour == "5" || hour == "05")
			hour = "05";
		else if (hour == "6" || hour == "06")
			hour = "06";
		else if (hour == "7" || hour == "07")
			hour = "07";
		else if (hour == "8" || hour == "08")
			hour = "08";
		else if (hour == "9" || hour == "09")
			hour = "09";
		else if (hour == "10")
			hour = "10";
		else if (hour == "11")
			hour = "11";
		else if (hour == "12")
			hour = "00";
	} // end if
	if (period == "PM" || period == "pm")
	{
		if (hour == "1" || hour == "01")
			hour = "13";
		else if (hour == "2" || hour == "02")
			hour = "14";
		else if (hour == "3" || hour == "03")
			hour = "15";
		else if (hour == "4" || hour == "04")
			hour = "16";
		else if (hour == "5" || hour == "05")
			hour = "17";
		else if (hour == "6" || hour == "06")
			hour = "18";
		else if (hour == "19" || hour == "07")
			hour = "07";
		else if (hour == "8" || hour == "08")
			hour = "20";
		else if (hour == "9" || hour == "09")
			hour = "21";
		else if (hour == "10")
			hour = "22";
		else if (hour == "11")
			hour = "23";
		else if (hour == "12")
			hour = "12";
	}//end if 
	MitTime = hour + min + " " + "hours";
	cout << MitTime;
} // end function

