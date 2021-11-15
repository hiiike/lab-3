#pragma once
#include "B3.h"
#include "D1.h"

class D2 : protected B3, public D1
{
private:
	int d2;
public:
	D2(int, int, int, int, int);
	~D2();

	void show_D2();
};
