// prep4exam2.cpp : Defines the entry point for the console application.
//

/*
Which of the following declarations are equivalent?

char string_var[10] = “Hello”;
char string_var[10] = {‘H’, ‘e’, ‘l’, ‘l’, ‘o’, ‘\0’};
char string_var[10] = {‘H’, ‘e’, ‘l’, ‘l’, ‘o’};
char string_var[6] = “Hello”;
char string_var[] = “Hello”;


What library you need to include to use cstring functions?

Declare a cstring that represents the empty string.

What (if anything) is wrong with the following code?

char string_var[] = “Hello”;
strcat(string_var, “ and Good-bye.”);
cout << string_var;

Considering the following code (and assume it is embedded in a complete and correct program and then run):

char a[8], b[8];
cin >> a >> b;
cout << a << ‘-‘ << b << “End of output\n”;

If the dialogue begins as follows, what will be the output?

The
time is now.

What library you need to include to use string class?
What does the following line do?

string s1;

Consider the following code:

string s1, s2(“Hello”);
cout << “Enter a line of input:\n”;
cin >> s1;
if (s1 == s2)
cout << “Equal\n”;
else
cout << “Not Equal\n”;
Quiz-string

If the dialogue begins as follows, what will be the next line of input?

Hello friend!



What is the output of the following code?

string s1, s2(“Hello”);
s1 = s2;
s2[0] = ‘J’;
cout << s1 << “ “ << s2;


When accessing a char in a string object, what is the deference between [] and at function?

What’s wrong with the following code fragment? How to fix it?

string s1 = “Tom”, s2(“Hello”);
char s3[10];
s3 = s2 + s1;
cout << s3;

What library is needed to use vectors?
Compare vector and array
Declare an empty vector that can hold doubles
Declaring a vector that contains 20 ones.
Write a statement that adds 1 to the end of a vector a.
Write a function that print elements of a vector of integers

*/

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

int main()
{ 

	
	string s1 = "Tom", s2("Hello");
	char s3[10];
	s3 = s2 + s1;
	cout << s3;



    return 0;
}

