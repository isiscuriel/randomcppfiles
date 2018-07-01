// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
/*
Name:Isis Curiel
Course:CS124
Instructions:
The input file is in exactly the following
format: Each line contains a student's last name, then one
space,then the student's first name, then one space, then 10 quiz sWrite a program to compute numeric grades for a course.
The course records are in a file that will serve as
the input file.cores all on one line. The quiz scores
as whole numbers and are separated by one space. Your program
will take its input from the file and send its output to a
second file. The data in the output file will be the same as
the data in the input file except that there will be one additional
number of the type double at the end of each line. This number
will be the average of the student's 10 quiz scores.Use at least one
function that has file streams as all or some of its arguments.
* */

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
void calculate(ifstream& in, ofstream& out)
{
	int i, sum, a[10];
	string firstName, lastName;
	double avg;
	in >> lastName;
	in >> firstName;
	while (in)
	{
		sum = 0;
		for (i = 0; i<10; i++)
		{
			in >> a[i];

			sum += a[i];
		}
		out << lastName << " " << firstName << " ";
		for (i = 0; i<10; i++)
			out << a[i] << " ";
		avg = sum / 10.0;
		out << avg << endl;
		in >> lastName;
	}
}
int main()
{
	ifstream in;
	ofstream out;
	in.open("grades.txt");  //open file
	if (in.fail())             //is it ok?
	{
		cout << "input file did not open please check it" << endl;
		exit(1);
	}
	out.open("results.txt");//open file
	calculate(in, out);
	out.close();
	in.close();
	system("pause");
	return 0;
}

