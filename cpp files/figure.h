/**
Class for simple character graphics figures to be sent to the
screen. This class will draw an asterisk on the screen as a test.
It is not intended to be used as a "real" figure in any graphics.
It is intended to be used as a base class for other classes
of figures that will be used in graphics applications.
*/
#include <iostream>

class Figure {

	private: 
		int offset;

	public: 
		Figure()
		{
		offset = 0;
		}

		Figure(int theOffset)
		{
			offset = theOffset;
		}

		void setOffset(int newOffset)
		{
			offset = newOffset;
		}

		int getOffset()
			{
				return offset;
			}

		/**
		Draws the figure at lineNumber lines down
		from the current line.
		*/
		void drawAt(int lineNumber)
		{
			int count;
				for (count = 0; count < lineNumber; count++)
					cout << endl;
					drawHere();
		}			

	/**
	Draws the figure at the current line.
	*/
		void drawHere()
			{
			int count;
			for (count = 0; count < offset; count++)
				cout << "figure drawHere()";

			}

		void spaces(int number)
		{
			int count;
				for (count = 0; count < number; count++)
					cout << ' ';
		}
};