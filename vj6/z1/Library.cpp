//
// Created by stipo on 28. 04. 2020..
//

#include "Library.hpp"
#include <iostream>

std::vector<std::string> Library::GetBookByTitle(std::string title)
{
	std::vector<std::string> AllBooks;
	for (int i = 0; i < mEBooks.size(); ++i)
	{
		int found = mEBooks[i].mTitle.find(title);
		if (found != std::string::npos)
		{
			AllBooks.push_back(mEBooks[i].mTitle);
		}
	}

	return AllBooks;
}

std::vector<std::string> Library::GetBookByAuthorName(std::string authorName)
{
	std::vector<std::string> AllBooks;
	for (int i = 0; i < mEBooks.size(); ++i)
	{
		if (mEBooks[i].mAuthor == authorName)
		{
			AllBooks.push_back(mEBooks[i].mTitle);
		}
	}

	return AllBooks;
}

int Library::GetTotalSize(std::string authorName)
{
	int size = 0;
	for (int i = 0; i < mEBooks.size(); ++i)
	{
		if (mEBooks[i].mAuthor == authorName)
		{
			size += mEBooks[i].mSize;
		}
	}
	return size;
}
