#include <iostream>
using namespace std;
/*
Name: Isis Curiel
Course: CS124
Instructions:
Question 14: Write a program that calculates the total grade for N classroom exe-
rcises as a percentage. The user should input the value for N followed by each of
the N scores and totals. Calculate the overall percentage (sum of the total points
earned divided by the total points possible) and output it as a percentage. Sample
input and output as shown below.

How many excercises to input ? 3

Score recieved for excercise 1: 10
Total points posible for excercise 1: 10

Score recieved for excercise 2: 7
Total points posible for excercise 2: 12

Score recieved for excercise 3: 5
Total points posible for excercise 3: 8

Your total is 22 out of 30, or 73.33%.
*/
int main() {

	int input;
	cout << "How many exercises to input? "; ///prompts user to input excercise # 
	cin >> input; 
	cout << endl;
	int earnedSum = 0; //holds the sum of amount of points earned 
	int totalSum = 0; /// holds the amount of points possible 
	for (int i = 0; i<input; i++)
	{
		int score;
		int total;
		cout << "Score received for exercise " << (i + 1) << " : "; //prompts user for points scored
		cin >> score;
		cout << endl;
		earnedSum = earnedSum + score; ///adds to the sum of amount of points earned  
		cout << "Total points possible for exercise " << (i + 1) << " : ";//prompts user for points possible 
		cin >> total;
		cout << endl;
		totalSum = totalSum + total;///adds to the sum of amount of points possible 
	}//end for  
	cout << "Your total is " << earnedSum << " out of " << totalSum << ", or " << setprecision(4) 
		<< static_cast<double> (earnedSum * 100) / static_cast<double> (totalSum) << "%." << endl;
	///prints out the sum of points earned out of the total # of points possible 
	/// it also prints out the overall percentage 

	return 0; 
}