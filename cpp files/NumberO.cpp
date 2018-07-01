// NumberO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>
#define A_ASCII_VAL 65

using namespace std;

//function prototype
void sortCounts(char letters[], int letterCounts[]);

int main() {
	//declare variable
	string sentence;

	//prompt the user to enter a sentence
	cout << "Enter a sentence: ";

	//read in the user's input, and store it in sentence
	getline(cin, sentence);

	//create arrays
	char letters[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	int letterCounts[26] = { 0 };

	//traverse the chars in sentence
	for (unsigned long i = 0; i < sentence.length(); i++) {
		//determine if the sentence char at i is a letter
		if (isalpha(sentence.at(i))) { //isalpha checks if a character is alphabetical 
			//increment the count of the sentence char at i
			letterCounts[toupper(sentence.at(i)) - A_ASCII_VAL]++;
		} //end if
	} //end for

	  //sort the counts
	sortCounts(letters, letterCounts);

	//loop from zero to twenty-six
	for (int i = 0; i < 26; i++) {
		//determine if the element value at i is not zero
		if (letterCounts[i] != 0) {
			//display the count of the letter at i
			cout << letters[i] << ": " << letterCounts[i] << endl;
		} //end if
	} //end for
	Sleep(30000);
	return 0;
} //main

void sortCounts(char letters[], int letterCounts[]) {
	//declare variable
	int maxValueIndex = 0;
	int size = 26;

	//loop while size is not one
	while (size != 1) {
		//traverse letterCounts
		for (int i = 1; i < size; i++) {
			//determine if the element at i is greater than the element at maxValueIndex
			if (letterCounts[i] > letterCounts[maxValueIndex]) {
				//set maxValueIndex equal to i
				maxValueIndex = i;
			} //end if
		} //end for

		  //store the element at maxValueIndex in temp
		int temp = letterCounts[maxValueIndex];
		char tempTwo = letters[maxValueIndex];

		//set the element at maxValueIndex equal to the value of the element at size - 1
		letterCounts[maxValueIndex] = letterCounts[size - 1];
		letters[maxValueIndex] = letters[size - 1];

		//set the element at s - 1 equal to temp
		letterCounts[size - 1] = temp;
		letters[size - 1] = tempTwo;

		//reset maxValueIndex to zero
		maxValueIndex = 0;

		//decrement size
		size--;
	} //end while
} //sortCounts