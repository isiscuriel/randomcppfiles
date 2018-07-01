#include "set.h"
int main()
{
	//input first set from word-choice 1 txt 

	Set s1();
	cin >> s1;

	//input second set from word-choice 2 txt 
	Set s2;
	cin >> s2;

	//s3 is a union of s1 and s2
	cout << "this is the union of word-choice 1 txt and word-choice 2 txt : " << endl;
	Set s3;
	s3 = s1.unite(s2);
	cout << s3 << endl;

	cout << endl;

	//s4 is an intersection of s1 and s2
	cout << "This is the intersection of word-choice 1 txt  and word-choice 2 txt : " << endl;
	Set s4;
	s4 = s1.intersection(s2);
	cout << s4 << endl;

	cout << endl << endl;

	//Test the copy constructor, insert, and delete. Default constructor was already tested.
	cout << "We are now inserting the word random and deleting the word extra: " << endl;
	Set s5(s1);
	s5.insert("random");
	s5.deleteElement("extra");
	cout << s5 << endl;






	system("pause");
	return 0;
}