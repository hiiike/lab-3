#pragma once
#include "B1.h"
#include "B2.h"
class D1 :public B2, protected B1
{
private:
	int d1;
public:
	D1(int, int, int);
	~D1();

	void show_D1();
};
