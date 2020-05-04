//
// Created by stipo on 28. 04. 2020..
//

#ifndef Z1__EBOOK_HPP_
#define Z1__EBOOK_HPP_

#include "Book.hpp"

class EBook : public Book
{
 public:
	EBook()
	{
	}

	EBook(std::string author, std::string title,
		unsigned year, std::string fileName, float size) : Book(author, title, year), mFileName(fileName), mSize(size)
	{
	}

	~EBook()
	{
	}

	float GetSize() override
	{
		return mSize;
	};

	inline std::string GetFileName() const
	{
		return mFileName;
	};

	inline void SetSize(float size)
	{
		mSize = size;
	}

	inline void SetFileName(std::string& fileName)
	{
		mFileName = fileName;
	}

 private:
	std::string mFileName;
	float mSize;
};

#endif //Z1__EBOOK_HPP_
