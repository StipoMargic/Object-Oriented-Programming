#include "Library.hpp"
#include <iostream>
using namespace std;

int main()
{
	Library library;
	vector<Book*> AllBooks;

	EBook eBook1("Shin Takahashi",
		"Iroha Inoue; The Manga Guide to Linear Algebram", 2005,
		" No_Starch_The_Manga_Guide_to_Linear_Algebra.pdf",
		34.6);

	EBook eBook2("Allen Holub",
		"Enough Rope to Shoot Yourself in the Foot",
		2005,
		"Enough_Rope_to_Shoot_Yourself_in_the_Foot.pdf",
		11);

	HardCopyBook hardCopyBook1("Aldous Huxley", "Island", 2010, 336);
	HardCopyBook hardCopyBook2("Neal Stephenson", "Cryptonomicon", 199, 918);

	Book* book1 = &eBook1;
	Book* book2 = &eBook2;
	Book* book3 = &hardCopyBook1;
	Book* book4 = &hardCopyBook2;

	AllBooks.push_back(book1);
	AllBooks.push_back(book2);
	AllBooks.push_back(book3);
	AllBooks.push_back(book4);

	library.SetBooks(AllBooks);

	float size = library.GetTotalSize("Allen Holub");
	cout << size;
}

