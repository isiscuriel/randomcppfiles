#include "rationalH.h"

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

	if (right.d == 1){

		outStream << right.n;

	}

	else if ((right.n > 0 || right.n < 0) && right.d == 1){

		right.n == right.n;
		right.d == 1;

	}

	else if (right.n < 0 && right.d < 0){

		right.n == abs(right.n);
		right.d == abs(right.d);
		outStream << "(" << abs(right.n) << "/" << abs(right.d) << ")";

	}

	else if (right.n == 0 && (right.d > 0 || right.d < 0)){
		right.n == 0;
		outStream << right.n;
	}

	else if (right.n == right.d){
		outStream << "1";
	}

	else if (right.n > 0 && right.d < 0){
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

	if (right.d == 0){

		cout << "You can not divide by zero in math. Please try again." << endl;
		system("pause");
		exit(1);

	}
	else if ((right.n > 0 || right.n < 0) && right.d == 1){

		right.n == right.n;
		right.d == 1;

	}
	else if (right.n > 0 && right.d > 0){

		right.n = right.n;
		right.d = right.d;

	}
	else if (right.n > 0 && right.d < 0){

		right.n = -right.n;
		right.d = abs(right.d);

	}
	else if (right.n < 0 && right.d > 0){

		right.n = right.n;
		right.d = right.d;

	}
	return inStream;
}

Rational operator +(const Rational& right, const Rational& d){

	Rational ans;
	ans.n = right.n + d.n;
	Rational a1 = right;
	Rational a2 = d;
	a1.n = a1.n * a2.d;
	a2.n = a2.n * a1.d;
	ans.n = R1.n + R2.n;
	ans.d = right.d * d.d;
	return ans;

}

Rational operator *(const Rational& right, const Rational& d){
	Rational ans;
	ans.n = right.n * d.n;
	ans.d = right.d * d.d;
	return ans;
}

Rational operator /(const Rational& right, const Rational& d){

	Rational ans = right;
	ans.n *= d.d;
	ans.d *= d.n;
	return ans;

}

Rational operator -(const Rational& right, const Rational& d){

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


bool operator ==(const Rational& right, const Rational& d){

	return ((right.n * d.d) == (right.d *d.n));

}

bool operator >=(const Rational& right, const Rational& d){

	return ((right.n * d.d) >= (right.d *d.n));

}

bool operator <=(const Rational& right, const Rational& d){

	return ((right.n * d.d) <= (right.d *d.n));

}

bool operator <(const Rational& right, const Rational& d){

	return ((right.n * d.d) < (right.d *d.n));

}

bool operator >(const Rational& right, const Rational& d){

	return ((right.n * d.d) > (right.d *d.n));

}