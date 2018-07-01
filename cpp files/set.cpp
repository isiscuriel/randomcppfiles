#include "set.h"
Set::Set()
{
	numOfElements = 0;
	capacity = 10;
	collection = new string[capacity];
}

Set::Set(Set & diffSet)
{
	numOfElements = diffSet.numOfElements;
	capacity = diffSet.capacity;

	collection = new string[capacity];
	for (int x = 0; x < numOfElements; x++)
	{
		collection[x] = diffSet.collection[x];
	}
}

int Set::size()
{
	return numOfElements;

}

bool Set::isMember(string str)
{
	for (int x = 0; x < numOfElements; x++)
	{
		if (collection[x] == str)
			return true;
	}

	return false;
}

Set Set::unite(Set diffSet)
{
	Set s1;
	for (int x = 0; x < numOfElements; x++)
	{
		s1.insert(collection[x]);
	}

	for (int x = 0; x < diffSet.numOfElements; x++)
	{
		s1.insert(diffSet.collection[x]);
	}
	return s1;
}

Set Set::intersection(Set diffSet)
{
	Set s1;
	for (int x = 0; x < numOfElements; x++)
	{
		if (diffSet.isMember(collection[x]))
			s1.insert(collection[x]);
	}
	return s1;
}

void Set::insert(string s)
{

	if (isMember(s) == false)
	{
		if (numOfElements == capacity)
		{

			string *x;
			x = new string[capacity];
			for (int y = 0; y < numOfElements; y++)
			{
				x[y] = collection[y];
			}

			capacity *= 2;
			delete[] collection;
			collection = new string[capacity];
			for (int c = 0; c < numOfElements; c++)
			{
				collection[c] = x[c];
			}

			delete[] x;
		}
		else
		{
			collection[numOfElements] = s;
			numOfElements++;

		}
	}


}

void Set::deleteElement(string s)
{
	for (int x = 0; x < numOfElements; x++)
	{
		if (collection[x] == s)
		{
			for (int z = x; z < numOfElements; z++)
			{
				if (z != numOfElements - 1)
					collection[z] = collection[z + 1];
				else
				{
					collection[z] == "";
				}
			}
			numOfElements--;
		}

	}
}

Set::~Set()
{
	delete[] collection;
}


istream& operator >> (istream & inStream, Set & rightSide)
{
	string s;
	cout << "Keep entering words into the set.(-1 to stop): ";


	while (s != "-1")
	{
		cin >> s;
		if (s != "-1")
			rightSide.insert(s);
	}


	return inStream;
}

ostream & operator <<(ostream & outstream, const Set& right)
{
	cout << "Set[";
	for (int z = 0; z < right.numOfElements; z++)
	{
		if (z == right.numOfElements - 1)
			cout << right.collection[z] << "]";
		else
			cout << right.collection[z] << ", ";
	}

	if (right.numOfElements == 0)
		cout << "]";
	return outstream;
}

void Set::operator =(const Set & rightSide)
{

	numOfElements = rightSide.numOfElements;
	capacity = rightSide.capacity;

	collection = new string[capacity];
	for (int x = 0; x < numOfElements; x++)
	{
		collection[x] = rightSide.collection[x];
	}


}