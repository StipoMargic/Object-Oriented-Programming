//
// Created by stipo on 28. 04. 2020..
//

#ifndef Z1__EBOOK_HPP_
#define Z1__EBOOK_HPP_

#include "Book.hpp"

class EBook : public Book
{
 public:
	std::string mFileName;
	int mSize;
};

#endif //Z1__EBOOK_HPP_
