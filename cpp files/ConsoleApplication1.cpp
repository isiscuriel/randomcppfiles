// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
	int cards_in_hand;
	int value, total_value = 0;//the value of the cards between 2-21 or busted
	char card_value, ans;

	cout << "Th is program scores blackjack hand. Enter y or Y to continue: ";
	cin >> ans;

	while (ans == 'y' || ans == 'Y')
	{
		cout << "enter number of cards in your hand: ";
		cin >> cards_in_hand;

		for (int n = 1; n <= cards_in_hand; n++)
		{
			cout << "enter the value of card " << n << ". for card 2 - 9 enter 2 - 9\n"
				<< " and for 10, jack, queen and king enter t, j, q, k\n"
				<< "respectivly. if you have an ace enter it as your last card: ";
			cin >> card_value;

			switch (card_value)
			{
			case'2':
				value = 2;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case '3':
				value = 3;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case '4':
				value = 4;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case '5':
				value = 5;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case '6':
				value = 6;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case '7':
				value = 7;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case '8':
				value = 8;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case '9':
				value = 9;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case 't':
			case 'T':
				value = 10;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case 'j':
			case 'J':
				value = 10;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case 'q':
			case 'Q':
				value = 10;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case 'k':
			case 'K':
				value = 10;
				cout << "The value of card " << n << "is " << value << endl;
				total_value = value + total_value;
				break;
			case 'a':
			case 'A':
				if (total_value <= 10)
				{
					value = 11;
				}
				else
				{
					value = 1;
				}
				cout << "Value of card is " << value << endl;
				total_value = total_value + value;
				n++;
			default:
				cout << "Error: not valid entry.\n";
			}
		}
			if (total_value <= 21)
			{
				cout << "total value of cards is: " << total_value << endl;
			}
			else
				cout << "Busted\n";
			cout << "Try again, press y or Y: ";
			cin >> ans;
		
	}


	system("pause");
	return 0;
}


