#include "figure.h"
#include "Box.h"
#include "Triangle.h"
int main() {

	Box b1 = new Box(0, 3, 5);
	Box b2 = new Box(2, 4, 6);

	b1.drawAt(0);
	b2.drawAt(3);

	delete b1;
	delete b2;

	Triangle t = new Triangle(5, 10);
	t.drawAt(5);

	delete t;

	Figure fig = new Box(2, 4, 6);
	fig.drawAt(3);
	fig = new Triangle(5, 10);
	fig.drawAt(3);

	delete fig;

}