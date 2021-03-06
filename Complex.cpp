#include "Complex.h"
#include "Pair.h"

using namespace std;

void Complex::Init(Pair pair) { SetPair(pair); }

void Complex::Display(Pair& k1, Pair& k2)
{
	Complex R(0,0);
	cout << " (a,b) * (c,d) = (a c * b d , a d + b c)" << "= ";
	cout << "( " << (R.Multiply_1(k1, k2)) << " , " << (R.Multiply_2(k1, k2)) << " )" << endl;

	cout << " (a,b) - (c,d) = (a - c, b - d)" << "=";
	cout << "( " << R.Diff_1(k1, k2) << " , " << R.Diff_2(k1, k2) << " )" << endl;
}

Complex::Complex()
{
	SetFirst(0);
	SetSecond(0);
}

Complex::Complex(int d = 0, int v = 0)
{
    SetFirst(d);
	SetSecond(v);
}

Complex::Complex(const Pair&)
{
}

int Complex::Diff_1(Pair& k1, Pair& k2)
{
	return k1.GetA() - k2.GetA();
}

int Complex::Diff_2(Pair& k1, Pair& k2)
{
	return k1.GetB() - k2.GetB();
}

int Complex::Multiply_1(Pair& k1, Pair& k2)
{
	return (k1.GetA() + k2.GetA()) * (k1.GetB() + k2.GetB());
}

int Complex::Multiply_2(Pair& k1, Pair& k2)
{
	return k1.GetA() + k2.GetB() + k1.GetB() + k2.GetA();
}

