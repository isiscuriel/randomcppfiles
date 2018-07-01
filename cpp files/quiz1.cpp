// quiz1.cpp : Defines the entry point for the console application.
//
/*

#include <iostream>
using namespace std;
int main()
{

	double r ;

	cin >>  r ;

	cout << 3.1415926 * r * r << endl;


}


2. How can you modify the code in 1. so that  it is more readable, and  more concise and more user friendly?
#include <iostream>
using namespace std;
int main()
{

double r ;

cout << "Input radius";
cin >>  r ;

cout <<"Area = "<< 3.1415926 * r * r << endl;


}

3. How to modify the code so that the output only has 3 decimals after the decimal point?
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

double r ;

cout << "Input radius:";
cin >>  r ;

cout <<"Area = " << fixed << setprecision(3)<< 3.1415926 * r * r << endl;


}

4. How to modify the code so that  the area is printed out only if r is not negative? i.e. if the  input is negative, then no
area will be printed out

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

double r;

cout << "Input radius:";
cin >> r;

if (r > 0)
cout << "Area = " << fixed << setprecision(3) << 3.1415926 * r * r << endl;

}


5. How to modify the code so that the program can  keep printing out the area until the input is negative? So if the first input is negative, then no
computation will be done.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

double r;

do {
cout << "Input radius:";
cin >> r;

if (r > 0)
cout << "Area = " << fixed << setprecision(3) << 3.1415926 * r * r << endl;
}while (r > 0);

return 0;

}

6. How to modify the code so that the input r must be non-negative?

#include <iostream>
using namespace std;
int main()
{

double r ;

cin >>  r ;

if(r > 0) 
	cout << 3.1415926 * r * r << endl;

if(r < 0) {
	cout << "Please enter a positive radius";
	cin >> r;
	}

}


7. How to modify the code so that the program can  keep printing out the area  until the user types Q or q?

#include <iostream>
using namespace std;
int main()
{

	double r;
	char ans;

	do { 
	cin >>  r ;

	cout << 3.1415926 * r * r << endl;

	cout << "To quit press Q or q to continue press any other key";
	cin >> ans;


	}while(ans !='q' || ans !='Q');

}





8. How to modify the code so that the program can print out the area at least once and then  keep printing out the area
until the input is negative? So if the first input is negative, the program insists the user to input a non-negative number until the
input is positive, then the area will be printed out; after that the program keeps printing out the area until the input is negative.

#include <iostream>
using namespace std;
int main()
{

double r ;

cin >>  r ;

cout << 3.1415926 * r * r << endl;


}

*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int main()
{

	double r = 0;

	cout << "Input radius:";
	cin >> r;

	if(r < 0){
	cout << "Area = " << fixed << setprecision(3) << 3.1415926 * r * r << endl;
	}
	return 0;

}



