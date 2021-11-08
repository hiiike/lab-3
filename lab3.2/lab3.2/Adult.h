#pragma once
#include "Man.h"

class Adult : public Man
{
private:
	int passport_number;
public:
	Adult();
	Adult(int, const char*, int, int);

	~Adult();

	void SetPassportNumber(int);
	void SetWeight(int Weight);

	int GetPassportNumber() const;

	friend ostream& operator << (ostream&, const Adult&);
	operator string() const;
};
