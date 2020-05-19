//
// Created by stipo on 28. 04. 2020..
//

#ifndef Z1__BOOK_HPP_
#define Z1__BOOK_HPP_

#include <string>

class Book
{
 public:
	Book() : Book("K. Mitnick", "The art of invisibility", 2017)
	{
	}

	Book(std::string author, std::string title, int year) : mAuthor(author), mTitle(title), mYear(year)
	{
	}

	~Book()
	{
	}

	virtual float GetSize() = 0;

	inline std::string GetAuthor() const
	{
		return mAuthor;
	}

	inline std::string GetTitle() const
	{
		return mTitle;
	}

	inline int GetYear() const
	{
		return mYear;
	}

	inline void SetAuthor(std::string& author)
	{
		mAuthor = author;
	}

	inline void SetTitle(std::string& title)
	{
		mTitle = title;
	}

	inline void SetYear(int year)
	{
		mYear = year;
	}

 private:
	std::string mAuthor;
	std::string mTitle;
	int mYear;
};

#endif //Z1__BOOK_HPP_
