#include <sstream>
#include "FuzzyNumber.h"
#include "Object.h"

FuzzyNumber::FuzzyNumber() : Object()
{
	x = 0;
	l = 0;
	r = 0;
}
FuzzyNumber::FuzzyNumber(double valuex = 0, double valuel = 0, double valuer = 0) : Object()
{
	x = valuex;
	l = valuel;
	r = valuer;
}

FuzzyNumber::FuzzyNumber(FuzzyNumber& obj, int) : Object()
{
	x = obj.x;
	l = obj.l;
	r = obj.r;
}

FuzzyNumber& FuzzyNumber::operator =(const FuzzyNumber& obj)
{
	x = obj.x;
	l = obj.l;
	r = obj.r;

	return *this;
}

FuzzyNumber::operator std::string()
{
	std::stringstream sout;
	sout << "\n\nThe value of this objects: ";
	sout << "\nvalue x: " << x;
	sout << "\nvalue l: " << l;
	sout << "\nvalue r: " << r;

	return sout.str();
}


std::ostream& operator << (std::ostream& out, const FuzzyNumber& obj)
{
	out << "\nThe value of the fuzzy number: ( " << obj.x - obj.l << ", " << obj.x << ", " << obj.x + obj.r << " )";
	return out;
}

std::istream& operator >> (std::istream& in, FuzzyNumber& obj) {
	double a{}, b{}, c{};
	bool cheñk{};
	do {
		std::cout << "\n\nEnter a value x: "; in >> a;
		std::cout << "\nEnter a value l: "; in >> b;
		std::cout << "\nEnter a value r: "; in >> c;

		if (((a - b) < a) && (a < (a + c)))
			cheñk = true;
		else {
			std::cout << "Wrong (value)!!!";
			cheñk = false;
		}
	} while (!cheñk);

	obj.x = a;
	obj.l = b;
	obj.r = c;

	return in;
}

FuzzyNumber& FuzzyNumber::operator ++ ()
{
	++x;
	return *this;
}

FuzzyNumber& FuzzyNumber::operator -- ()
{
	--l;
	return *this;
}

FuzzyNumber FuzzyNumber::operator ++ (int)
{
	FuzzyNumber a(*this);
	r++;
	return a;
}

FuzzyNumber FuzzyNumber::operator -- (int)
{
	FuzzyNumber a(*this);
	x--;
	return a;
}


FuzzyNumber operator -(FuzzyNumber A, FuzzyNumber B)
{
	FuzzyNumber obj_subtraction(0.0, 0.0, 0.0);
	obj_subtraction.x = A.x - B.x - A.l - B.l;
	obj_subtraction.l = A.x - B.x;
	obj_subtraction.r = A.x - B.x + A.r + B.r;

	return obj_subtraction;
}

FuzzyNumber operator /(FuzzyNumber A, FuzzyNumber B)
{
	FuzzyNumber obj_division(0.0, 0.0, 0.0);
	do
	{
		obj_division.x = 1. / (A.x + A.r);
		obj_division.l = 1. / (A.x);
		obj_division.r = 1. / (A.x - A.l);

		return obj_division;
	} while (A.x > 0);
}

FuzzyNumber FuzzyNumber::Function(FuzzyNumber A, FuzzyNumber B)
{
	FuzzyNumber obj_division_2(0.0, 0.0, 0.0);
	do
	{
		obj_division_2.x = (A.x - A.l) / (B.x + B.r);
		obj_division_2.l = A.x / B.x;
		obj_division_2.r = (A.x + A.r) / (B.x - B.l);

		return obj_division_2;
	} while (B.x > 0);
}
