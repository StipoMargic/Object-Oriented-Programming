//
// Created by stipo on 28. 04. 2020..
//

#ifndef Z1__LIBRARY_HPP_
#define Z1__LIBRARY_HPP_

#include "EBook.hpp"
#include "HardCopyBook.hpp"
#include <vector>
class Library
{
 public:
	Library()
	{
		mBooks = {};
	}

	inline std::vector<Book*> GetBooks() const
	{
		return mBooks;
	}

	inline void SetBooks(std::vector<Book*>& Books)
	{
		mBooks = Books;
	}

	std::vector<std::string> GetBookByAuthorName(const std::string& authorName) const;
	float GetTotalSize(const std::string& authorName) ;
	std::vector<Book*> GetBooksByTitle(const std::string& title) const;
 private:
	std::vector<Book*> mBooks;
};

#endif //Z1__LIBRARY_HPP_
