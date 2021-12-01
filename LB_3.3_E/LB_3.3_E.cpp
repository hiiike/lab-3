#include "Pair.h"
#include "Complex.h"


int main()
{
	cout << " Number of elements: " << Object::Counter() << endl;

	Complex pair_1(1, 1), pair_2(1, 1);
	Pair pair1, pair2, k;
	cout << " pair (a,b) - ?"; cin >> pair1;
	cout << " ( a , b )";
	cout << pair1;

	cout << " pair (c,d) - ?"; cin >> pair2;
	cout << " ( c , d )";
	cout << pair2;

	Pair a = pair1 + pair2;
	cout << "(a, b) + (c, d) = (a + c), (b + d)";
	cout << a;

	cout << endl << "Public" << endl;
	Complex g;
	g.Init(k);
	g.Display(pair1, pair2);
	cout << " Number of elements: " << Object::Counter() << endl;
	return 0;
}