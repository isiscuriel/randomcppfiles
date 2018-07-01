// quiz2.cpp : Defines the entry point for the console application.
//

/* 

1. Write a statement to declare a named constant PI whose value is 3.14.

constant double PI = 3.14; 

2. Given a variable d whose type is double, how do you do type cast d to int ?
 double d; 
 int e = d;


3. Given the value x = 8, what is the truth value of the following expression :
!x > 5         !(x > 5)    x < 3 || x > 9           x > 3 && x < 9

!(x < 3) || x > 9

4. Give the following declaration, what are the values of U, X, Z ?

enum T{ U, W = 2, X, Y = 3, Z };

What is the output of the following if t has value 0, 1, 2, 3, 4, 5 ?
int i;
T t = static_cast<T>(2);;
// assign a value to t
switch (t)
{
case U:
case W:
cout << t + 1 << endl;
break;
case X: cout << t << endl;
case Z:
cout << t + 2 << endl;
break;
default:
cout << "wrong value" << endl;

}

5. What is the output for each of the following ?
(1)
int i = 0;
while (++i < 5)
cout << i << endl;
cout << 2 * i << endl;

(2)
int i = 0;
while (i++ < 5)
cout << i << endl;
cout << 2 * i << endl;

(3)
int i = 0;
while (++i < 5);
cout << i << endl;
cout << 2 * i << endl;

(4)
int i = 0;
while (i< 5)
{
cout << i << endl;
cout << 2 * i << endl;
i++;
}
(5)
int i = 0;
for (; i < 5; i++)
cout << i << endl;
cout << 2 * i << endl;

(6)
int i = 0;
for (; i++ < 5;)
cout << i << endl;
cout << 2 * i << endl;

(7)
int i = 0;
for (; i++ < 5; i++)
cout << i << endl; 4
cout << 2 * i << endl;


6. Write a function that takes 3 parameters of int type, and return the maximum of the three.

7. Write a function that takes 3 parameters of double type, a, b, c, and return the smaller root of the equation, ax ^ 2 + bx + c = 0.
assuming the equation has real roots.

8. Write a function isComposite that takes a positive int, return true if the number is composite, return false if it is not.

9. project 7 from the book on page 249: write a function  to compute the difference between two times :
a time is determined by hour, minutes, am / pm, the two times are within 24 hours difference at most.The function returns the difference in minutes.

*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{

	double A, B, C;
	cout << "minZeros(A,B,C)";
	Sleep(10000);
	boolean J;
	}


