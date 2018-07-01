/**
Class for a rectangular box to be drawn on the screen.
Because each character is higher than it is wide, these
boxes will look higher than you might expect. Inherits
getOffset, setOffset, and drawAt from the class Figure.
*/
public class Box: public Figure
{
public:
	 int height;
	 int width;
private:
	 Box()
	{
		super();
		height = 0;
		width = 0;
	}

	 Box(int theOffset, int theHeight, int theWidth)
	{
		super(theOffset);
		height = theHeight;
		width = theWidth;
	}

	 void reset(int newOffset, int newHeight, int newWidth)
	{
		setOffset(newOffset);
		height = newHeight;
		width = newWidth;
	}

	/**
	Draws the figure at the current line.
	*/
	 void drawHere()
	{
		drawHorizontalLine();
		drawSides();
		drawHorizontalLine();
	}

	 void drawHorizontalLine()
	{
		spaces(getOffset());
		int count;
		for (count = 0; count < width; count++)
			cout << '*';
		cout << "" <<endl;
	}

	 void drawSides()
	{
		int count;
		for (count = 0; count < (height - 2); count++)
			drawOneLineOfSides();
	}

	 void drawOneLineOfSides()
	{
		spaces(getOffset());
		cout <<'*';
		spaces(width - 2);
		cout << '*'<< endl;
	}




};




