#include "Adult.h"

Adult::Adult()
{
	SetName("");
	SetAge(1);
	SetAge(0);
	SetPassportNumber(0);
}
Adult::Adult(int passport_number = 0, const char* name = "",
	int course = 0, int Weight = 0)
{
	SetPassportNumber(passport_number);
	SetName(name);
	SetAge(course);
	SetWeight(Weight);
}

Adult::~Adult() {}

void Adult::SetPassportNumber(int passport_number)
{
	this->passport_number = passport_number;
}
void Adult::SetWeight(int Weight)
{
	Man::SetWeight(Weight);
}
int Adult::GetPassportNumber() const { return passport_number; }

Adult::operator string() const
{
	stringstream ss;
	ss << " Passport Numder: " << GetPassportNumber() << endl;
	ss << " name: " << GetName() << endl;
	ss << " age: " << GetAge() << endl;
	ss << " weight: " << GetWeight() << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Adult& A)
{
	out << string(A);
	return out;
}
