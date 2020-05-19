//
// Created by stipo on 28. 04. 2020..
//

#ifndef Z1__HARDCOPYBOOK_HPP_
#define Z1__HARDCOPYBOOK_HPP_

#include "Book.hpp"
class HardCopyBook : public Book
{
 public:
	HardCopyBook() : Book(), mPages(0)
	{
	}

	HardCopyBook(std::string authorName, std::string title, int year, int pages) : Book(authorName, title, year),
																				   mPages(pages)
	{
	}

	~HardCopyBook()
	{
	}

	float GetSize() override{
		return 0;
	};

	inline int GetPages() const
	{
		return mPages;
	}

	inline void SetPages(int pages)
	{
		mPages = pages;
	}

 private:
	int mPages;
};
#endif //Z1__HARDCOPYBOOK_HPP_
