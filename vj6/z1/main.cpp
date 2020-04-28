#include "Library.hpp"
#include <iostream>
using namespace std;

int main()
{
	Library library;
	EBook book1, book2, book3;
	book1.mAuthor = "Ivo";
	book1.mTitle = "Another";
	book1.mSize = 10;
	library.mEBooks.push_back(book1);
	book2.mAuthor = "Ivo02";
	book2.mTitle = "Test";
	book2.mSize = 10;
	library.mEBooks.push_back(book2);
	book3.mAuthor = "Ivo";
	book3.mTitle = "Test 3w";
	book3.mSize = 10;
	library.mEBooks.push_back(book3);

	vector<string> booksByAuthor = library.GetBookByAuthorName("Ivo");
	vector<string> booksByTitle = library.GetBookByTitle("Test");
	int total = library.GetTotalSize("Ivo");

	cout << total << endl;

	for (int i = 0; i < booksByTitle.size(); ++i)
	{
		cout << booksByTitle[i] << endl;
	}
}

