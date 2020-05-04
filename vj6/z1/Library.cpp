//
// Created by stipo on 28. 04. 2020..
//

#include "Library.hpp"
#include <iostream>

std::vector<std::string> Library::GetBookByAuthorName(const std::string& authorName) const
{
	std::vector<std::string> AllBooks;

	for (auto i = mBooks.begin(); i != mBooks.end(); ++i)
	{
		if ((*i)->GetAuthor() == authorName)
		{
			AllBooks.push_back((*i)->GetTitle());
		}
	}

	return AllBooks;
}

std::vector<Book*> Library::GetBooksByTitle(const std::string& title) const
{
	std::vector<Book*> AllBooks;

	for (auto i = mBooks.begin(); i != mBooks.end(); ++i)
	{
		if ((*i)->GetTitle().find(title) == -1)
		{
			AllBooks.push_back((*i));
		}
	}

	return AllBooks;
}

float Library::GetTotalSize(const std::string& authorName)
{
	float totalSize = 0;
	for (auto i = mBooks.begin(); i != mBooks.end(); ++i)
	{
		if ((*i)->GetAuthor() == authorName)
		{
			totalSize += (*i)->GetSize();
		}
	}
	return totalSize;
}
