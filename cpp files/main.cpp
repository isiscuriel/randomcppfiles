#include "rationalH.h"

int main() {

	cout << "Program by Isis Curiel";


	cout << endl;
	cout << endl;
	cout << endl;
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