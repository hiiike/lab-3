#include "Pair.h"

Pair::Pair()
{
    first = 0;
    second = 0;
}
Pair::Pair(double d = 0, double v = 0)
{
    first = d;
    second = v;
}
Pair::Pair(const Pair& r)
{
    first = r.first;
    second = r.second;
}
Pair::~Pair() { }

bool Pair::Init(double D, double V)
{
    if ((D >= 0 || D <= 0) &&
        (V >= 0 || V <= 0))
    {
        SetFirst(D);
        SetSecond(V);
        return true;
    }
    else
        return false;
}

Pair operator + (const Pair& a, const Pair& b)
{
    return Pair(a.first + b.first, a.second + b.second);
}

Pair& Pair::operator = (const Pair& r)
{

    first = r.first;
    second = r.second;
    return *this;
}

Pair::operator string () const
{
    stringstream sstr;
    sstr << endl << " ( " << first << " , " << second << " )" << endl << endl;
    return sstr.str();
}

ostream& operator << (ostream& out, const Pair& r)
{
    out << string(r);
    return out;
}

istream& operator >> (istream& in, Pair& r)
{
    cout << " "; in >> r.first;
    cout << " "; in >> r.second;
    r.Init(r.first, r.second);
    return in;
}
