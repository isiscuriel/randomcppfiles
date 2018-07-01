// CS124Assignment9.cpp : Defines the entry point for the console application.
//
/*
Assignment 9
Write a program that :

asks the user for a file name

open the file

count the number of distinct words

close the file

print out the distinct words and their frequencies.


words are separated by spaces, for counting, ignore the cases,  so the following


It can't be true, but it is true.
has 7 words, because "It" is the same as "it" and "true," is different from "true."

it      2
be      1
but     1
can't   1
is      1
true,   1
true.   1


use vector of strings to do the assignment.
*/

#include "stdafx.h"
#include <iostream> 
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include <algorithm>
using namespace std;


int main()
{
	string fileName;
	char inFileName[16], outFileName[16];
	ifstream in_stream;
	ofstream out_stream;


	cout << "Please input the file name (INPUT).Please no more than 15 characters: \n";
	cin >> inFileName;

	in_stream.open(inFileName);
	if (in_stream.fail())
	{
		cout << "Input file opening failed.\n";
		Sleep(50000);
		exit(1);

	}

		 
		vector<string> stringHolder;
		string words;
		/*
		int iWords;
		iWords = stoi(words);
		iWords = tolower(iWords);
		words = to_string(iWords);
		*/
		while (in_stream >> words) {
			transform(words.begin(), words.end(), words.begin(), ::tolower);
			stringHolder.push_back(words); //stores words in vector 
			}
		
		sort(stringHolder.begin(), stringHolder.end());

		int vSize = stringHolder.size();
		
		
		
		int wordCount = 1;
		words = stringHolder[0];
		for (int i = 1; i < vSize; i++) {
			if (words != stringHolder[i]) {
				cout << words << "        " << wordCount << endl;
				wordCount = 0;
				words = stringHolder[i];
			}
			wordCount++;
		}
		
		
		in_stream.close();
	
		Sleep(50000);

		
		return 0;
	}


