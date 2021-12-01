#pragma once
#include "Pair.h"

using namespace std;

class Complex : public Pair
{
private:
	Pair pair;

public:
	Complex();


	Pair GetPair() { return pair; }
	void SetPair(Pair pair) {};
	void SetFirst(int D) {};
	void SetSecond(int V) {};

	Complex(int, int);
	Complex(const Pair&);

	void Display(Pair& k1, Pair& k2);
	void Init(Pair pair);

	int Diff_1(Pair& k1, Pair& k2);
	int Diff_2(Pair& k1, Pair& k2);

	int Multiply_1(Pair& k1, Pair& k2);
	int Multiply_2(Pair& k1, Pair& k2);

};
