


/*
Define & implement a class for Set to store a collection of distinct strings.

Class name: Set. You should declare the class in set.h, and implement the class in set.cpp

Data Members:
a dynamic array of strings
the number of elements in the set.

Member Functions:
constructors:
default constructor: create an empty set
copy-constructor
other constructors you want

size(): returns the number of elements in the set

isMember(string s): test if s appears in the set

union(Set otherSet): returns a set that contains all distinct elements from this set and otherSet
intersection(Set otherSet): return a set that contains elements that appear in both this set and otherSet
insert(String s):
inset an element to the set, if the element is not already in the set;
if the dynamic array is full, you need to create another dynamic array of double size to hold the set, and delete the original array.
delete(String s):
Delete the specified element from the set.
destructor: release the memory that has been dynamically allocated

assignment operator  overload the operator so you can assign one set to another

operator <<      overload the operator so that it can be used to output sets to an output stream.

operator >>    overload the operator so that it can be used to input sets from any input stream, say a file input stream or cin.

Test your class:
Test default constructor, copy constructor, insert, delete

Create set S1 which contains all distinct words from file1, if you overload operator >>, use it
Create set S2 which contains all distinct words from file2, if you overload operator >>, use it
Let S3 be the union of S1 and S2
Let S4 intersection of S1 and S2
Output the size of S1, S2, S3 and S4
1


Output the sets S1, S2, S3 and S4, using the overloaded operator.
For your convenience, you can use the files word-choice1.txt and word-choice2.txt to
test your code; you can also use set.h and set.cpp as file1 and file2
*/
#include <iostream>
#include <string>
using namespace std;


class Set(){

private: 

	int numOfElements; /// the number of elements in the set.
	string *collection;
	int capacity;///a dynamic array of strings

public: 

	Set();

	Set(Set & diffSet);

	int size();

	bool isMember(string str);

	Set unite(Set diffSet);

	Set intersection(Set diffSet);

	void insert(string str);

	void deleteElement(string str);

	~Set();

	void operator =(const Set & rightSide);

	friend istream& operator >> (istream & inStream, Set& rightSide);

	friend ostream &operator <<(ostream & outstream, const Set&);




}
