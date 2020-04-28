//
// Created by stipo on 28. 04. 2020..
//

#ifndef Z1__LIBRARY_HPP_
#define Z1__LIBRARY_HPP_

#include "EBook.hpp"
#include <vector>
class Library : public EBook
{
 public:
	std::vector<EBook> mEBooks;
	std::vector<std::string> GetBookByAuthorName(std::string authorName);
	int GetTotalSize(std::string authorName);
	std::vector<std::string> GetBookByTitle(std::string title);
};

#endif //Z1__LIBRARY_HPP_
