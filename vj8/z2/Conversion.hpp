//
// Created by stipo on 09. 05. 2020..
//

#ifndef Z2__CONVERSION_HPP_
#define Z2__CONVERSION_HPP_

class Conversion
{
 public:
	Conversion() : Conversion(0)
	{

	}

	Conversion(int numb) : mNumb(numb)
	{
	}

		operator double() const;

 private:
	int mNumb;
};

#endif //Z2__CONVERSION_HPP_
