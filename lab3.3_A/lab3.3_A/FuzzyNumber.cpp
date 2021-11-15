#include <sstream>
#include "FuzzyNumber.h"


FuzzyNumber::FuzzyNumber()
{
	x = 0;
	l = 0;
	r = 0;
}
FuzzyNumber::FuzzyNumber(double valuex = 0, double valuel = 0, double valuer = 0)
{
	x = valuex;
	l = valuel;
	r = valuer;
}

FuzzyNumber::FuzzyNumber(FuzzyNumber& obj, int)
{
	x = obj.x;
	l = obj.l;
	r = obj.r;
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
