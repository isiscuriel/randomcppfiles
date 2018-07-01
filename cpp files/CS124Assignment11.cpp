// CS124Assignment11.cpp : Defines the entry point for the console application.
//

/*

This class implements rational number of the type 2/3.

class Rational;

private data: int n, (fraction numerator)
int d (fraction denominator).

//   make sure that d is always positive.

//  optional:   always simplify the number so that n and d don't have a common factor


public interface:
constructors:
two int args, to allow setting rational to any legal value
default numerator to be 0, default denominator to be 1

friend istream& operator >>(istream& in_str, Rational& right)

friend ostream& operator <<(ostream& out_str, cnst Rational& right)



overload + - * / <  <=  > >=   ==

friend Rational operator+(const Rational&, const Rational&);
....


*/ 
/*
A possible test and output is given below.

int main()
{
cout << "Testing declarations" << endl;
cout << "Rational x, y(2), z(-5,-6), w(1,-3);" << endl;
Rational x, y(2), z(-5, -6), w(1, -3);
cout << "x = " << x << ", y = " << y << ",  z = " << z
<< ", w = " << w << endl << endl;



cout << "Testing the constructor and normalization routines: " << endl;
y = Rational(-1, -4);
cout << "y =Rational(-1, -4) outputs as " << y << endl;
y = Rational(-1, 4);
cout << "y =Rational(-1, 4)outputs as " << y << endl;
y = Rational(1, -4);
cout << "y = Rational(128, -48) outputs as " << y << endl;
Rational a(1, 1);
cout << "Rational a(1,1); a outputs as: " << a << endl;
Rational ww = y*a;
cout << y << " * " << a << " = " << ww << endl << endl;

cout << "Testing >> overloading: \nEnter "
<< "a fraction in the format "
<< "integer_numerator/integer_denominator"
<< endl;
cin >> x;
cout << "You entered the equivalent of: " << x << endl;
cout << z << " -  (" << w << ") = " << z - w << endl << endl;



w = Rational(-7, 3);
z = Rational(-3, 5);
cout << "Testing arithmetic and relational "
<< " operator overloading" << endl << endl;
cout << w << " * " << z << " = " << w * z << endl;
cout << w << " + " << z << " = " << w + z << endl;
cout << w << " - " << z << " = " << w - z << endl;
cout << w << " / " << z << " = " << w / z << endl;

cout << w << " <  " << z << " : " << (w < z) << endl;

cout << w << " <= " << z << " : " << (w <= z) << endl;
cout << w << " <= " << w << " : " << (w <= w) << endl;

cout << w << " >  " << z << " : " << (w > z) << endl;
cout << w << " > " << w << " : " << (w > w) << endl;
cout << w << " >= " << z << " : " << (w >= z) << endl;

return 0;
}

== == == == == == == == ==

TestingTesting declarations
Rational x, y(2), z(-5, -6), w(1, -3);
x = 0 / 1, y = 2 / 1, z = 5 / 6, w = -1 / 3

Testing the constructor and normalization routines :
y = Rational(-1, -4) outputs as 1 / 4
y = Rational(-1, 4)outputs as - 1 / 4
y = Rational(128, -48) outputs as - 1 / 4
Rational a(1, 1); a outputs as : 1 / 1
- 1 / 4 * 1 / 1 = -1 / 4

Testing >> overloading :
	Enter a fraction in the format integer_numerator / integer_denominator
	2 / -3
	You entered the equivalent of : -2 / 3
	5 / 6 - (-1 / 3) = 21 / 18

	Testing arithmetic and relational  operator overloading

	- 7 / 3 * -3 / 5 = 21 / 15
	- 7 / 3 + -3 / 5 = -44 / 15
	- 7 / 3 - -3 / 5 = -26 / 15
	- 7 / 3 / -3 / 5 = 35 / 9
	- 7 / 3 <  -3 / 5 : 1
	- 7 / 3 <= -3 / 5 : 1
	- 7 / 3 <= -7 / 3 : 1
	- 7 / 3 >  -3 / 5 : 0
	- 7 / 3 > -7 / 3 : 0
	- 7 / 3 >= -3 / 5 : 0

*/

#include "stdafx.h"
#include <iostream> 

using namespace std;

class Rational {

private:
	int n; // (fraction numerator)
	int d; // (fraction denominator).

public:
	Rational(int num, int denom);
	/// takes in a numerator and denominator

	Rational(int wholeNum);

	Rational();
	///default constructor
	friend istream& operator >> (istream& in_str, Rational& right);
	friend ostream& operator << (ostream& out_str, const Rational& right);
	friend Rational operator+ (const Rational&, const Rational&);
	friend Rational operator *(const Rational& right, const Rational& d);
	friend Rational operator /(const Rational& right, const Rational& d);
	friend Rational operator -(const Rational& right, const Rational& d);
	friend bool operator ==(const Rational& right, const Rational& d);
	friend bool operator >=(const Rational& right, const Rational& d);
	friend bool operator <=(const Rational& right, const Rational& d);
	friend bool operator <(const Rational& right, const Rational& d);
	friend bool operator >(const Rational& right, const Rational& d);
};

Rational::Rational(int num, int denom) {

	n = num;
	d = denom;

}

Rational::Rational(int wholeNum) {

	n = wholeNum;
	d = 1;

}

Rational::Rational() {

	n = 0;
	d = 1;

}

ostream& operator <<(ostream& outStream, const Rational& right) {

	if (right.d == 1) {

		outStream << right.n;

	}

	else if ((right.n > 0 || right.n < 0) && right.d == 1) {

		right.n == right.n;
		right.d == 1;

	}

	else if (right.n < 0 && right.d < 0) {

		right.n == abs(right.n);
		right.d == abs(right.d);
		outStream << "(" << abs(right.n) << "/" << abs(right.d) << ")";

	}

	else if (right.n == 0 && (right.d > 0 || right.d < 0)) {
		right.n == 0;
		outStream << right.n;
	}

	else if (right.n == right.d) {
		outStream << "1";
	}

	else if (right.n > 0 && right.d < 0) {
		right.n == -right.n;
		right.d == abs(right.d);
		outStream << "(" << -(right.n) << "/" << abs(right.d) << ")";

	}

	else
		outStream << right.n << "/" << right.d;

	return outStream;
}

istream& operator >> (istream& inStream, Rational& right) {

	char s; ///for any char in between n and d 

	inStream >> right.n >> s >> right.d;

	if (right.d == 0) {

		cout << "You can not divide by zero in math. Please try again." << endl;
		system("pause");
		exit(1);

	}
	else if ((right.n > 0 || right.n < 0) && right.d == 1) {

		right.n == right.n;
		right.d == 1;

	}
	else if (right.n > 0 && right.d > 0) {

		right.n = right.n;
		right.d = right.d;

	}
	else if (right.n > 0 && right.d < 0) {

		right.n = -right.n;
		right.d = abs(right.d);

	}
	else if (right.n < 0 && right.d > 0) {

		right.n = right.n;
		right.d = right.d;

	}
	return inStream;
}

Rational operator +(const Rational& right, const Rational& d) {

	Rational ans;
	ans.n = right.n + d.n;
	Rational a1 = right;
	Rational a2 = d;
	a1.n = a1.n * a2.d;
	a2.n = a2.n * a1.d;
	ans.n = a1.n + a2.n;
	ans.d = right.d * d.d;
	return ans;

}

Rational operator *(const Rational& right, const Rational& d) {
	Rational ans;
	ans.n = right.n * d.n;
	ans.d = right.d * d.d;
	return ans;
}

Rational operator /(const Rational& right, const Rational& d) {

	Rational ans = right;
	ans.n *= d.d;
	ans.d *= d.n;
	return ans;

}

Rational operator -(const Rational& right, const Rational& d) {

	Rational ans;
	ans.n = right.n + d.n;
	Rational a1 = right;
	Rational a2 = d;
	a1.n = a1.n * a2.d;
	a2.n = a2.n * a1.d;
	ans.n = a1.n - a2.n;
	ans.d = right.d * d.d;
	return ans;

}


bool operator ==(const Rational& right, const Rational& d) {

	return ((right.n * d.d) == (right.d *d.n));

}

bool operator >=(const Rational& right, const Rational& d) {

	return ((right.n * d.d) >= (right.d *d.n));

}

bool operator <=(const Rational& right, const Rational& d) {

	return ((right.n * d.d) <= (right.d *d.n));

}

bool operator <(const Rational& right, const Rational& d) {

	return ((right.n * d.d) < (right.d *d.n));

}

bool operator >(const Rational& right, const Rational& d) {

	return ((right.n * d.d) > (right.d *d.n));

}

int main() {

	cout << "Testing declarations." << endl;
	cout << "Rational x, y(2), z(-5,-6), w(1,-3);" << endl;
	Rational x, y(2), z(-5, -6), w(1, -3);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "w = " << w << endl;
	cout << "Testing the constructor and normalization routines: " << endl;
	cout << endl;
	y = Rational(-1, -4);
	cout << "y =Rational(-1, -4) outputs as " << y << endl;
	y = Rational(-1, 4);
	cout << "y =Rational(-1, 4)outputs as " << y << endl;
	y = Rational(1, -4);
	cout << "y = Rational(128, -48) outputs as " << y << endl;
	Rational a(1, 1);
	cout << "Rational a(1,1); a outputs as: " << a << endl;
	Rational ww = y*a;
	cout << y << " * " << a << " = " << ww << endl << endl;
	cout << "Testing >> overloading: \nEnter " << "a fraction in the format " << "integer_num/integer_denom" << endl;
	cin >> x;
	cout << "You entered the equivalent of: " << x << endl;
	cout << z << " -  (" << w << ") = " << z - w << endl << endl;
	w = Rational(-7, 3);
	z = Rational(-3, 5);
	cout << "Testing arithmetic and relational "
		<< " operator overloading" << endl << endl;
	cout << w << " * " << z << " = " << w * z << endl;
	cout << endl;
	cout << w << " + " << z << " = " << w + z << endl;
	cout << endl;
	cout << w << " - " << z << " = " << w - z << endl;
	cout << endl;
	cout << w << " / " << z << " = " << w / z << endl;
	cout << endl;
	cout << w << " <  " << z << " : " << (w < z) << endl;
	cout << endl;
	cout << w << " <= " << z << " : " << (w <= z) << endl;
	cout << endl;
	cout << w << " <= " << w << " : " << (w <= w) << endl;
	cout << endl;
	cout << w << " >  " << z << " : " << (w > z) << endl;
	cout << endl;
	cout << w << " > " << w << " : " << (w > w) << endl;
	cout << endl;
	cout << w << " >= " << z << " : " << (w >= z) << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}

