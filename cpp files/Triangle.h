#include <iostream>

/**
Class for triangles to be drawn on the screen. For this class,
a triangle points up and is completely determined by the size of
its base. (Screen character spacing determines the length of the
sides, given the base.)
Inherits getOffset, setOffset, and drawAt from the class Figure.
*/
class Triangle: public Figure
{
	private: 
		int base;
	public:
	 Triangle()
	{
		super();
		base = 0;
	}

	 Triangle(int theOffset, int theBase)
	{
		super(theOffset);
		base = theBase;
	}

	 void reset(int newOffset, int newBase)
	{
		setOffset(newOffset);
		base = newBase;
	}

	/**
	Draws the figure at current line.
	*/
	 void drawHere()
	{
		drawTop();
		drawBase();
	}

	 void drawBase()
	{
		spaces(getOffset());
		int count;
		for (count = 0; count < base; count++)
			cout << '*';
		cout << " ";
	}

	 void drawTop()
	{
		//startOfLine will be the number of spaces to the
		//first '*' on a line. Initially set to the number
		//of spaces before the top '*'.
		int startOfLine = getOffset() + (base / 2);
		spaces(startOfLine);
		cout << '*';//top '*'
		int count;
		int lineCount = (base / 2) - 1;//height above base
									   //insideWidth == number of spaces between the
									   //two '*'s on a line.
		int insideWidth = 1;
		for (count = 0; count < lineCount; count++)
		{
			//Down one line, so the first '*' is one more
			//space to the left.
			startOfLine--;
			spaces(startOfLine);
			cout <<'*';
			spaces(insideWidth);
			cout << '*';
			//Down one line, so the inside is 2 spaces wider.
			insideWidth = insideWidth + 2;
		}
	}


};
