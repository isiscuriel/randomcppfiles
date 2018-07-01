#include <iostream>
using namespace std;
/*
Name: Isis Curiel
Course: CS124
Instructions:
Question 9: Write a program that reads in ten whole numbers and that outputs
the sum of all the  numbers greater than 0, the sum of all the numbers less than
zero (which will be a negative number or zero), and the sum of all the numbers
whether positive, negative, or zero. The user enters the ten numbers just once
each and the user can enter them in any order. Your program should not ask the
user to enter the + or - #s seperately.

*/
int main() {
	int posNum = 0; // holds the sum of all + #s 
	int negNum = 0; /// holds the sum of all - #s
	int num;
	int sum;///holds the sum of all #s
	cout << "Please enter ten numbers:";
	for (int i = 0; i < 10; i++) {
		cin >> num; /// takes in each # 
		sum += num; //// adds # 
		if (num > 0) {
			posNum += num; /// adds to + #s if + 
		}
		else {
			negNum += num; /// else adds to - #s  
		}
	}
	cout << "The sum of positive numbers are  " << posNum << endl; ///prints out sum of + #s
	cout << "The sum of negative numbers are " << negNum << endl; /// prints out sum of - #s 
	cout << "The sum of all the numbers is " << sum << endl; /// prints out sum of all #s 

	return 0;




} /// end main 