#include <iostream>
#include "FuzzyNumber_Public.h"


int main(void) {
	using std::cout;


	FuzzyNumber_Public A2, B2, C2;
	std::cin >> A2;
	std::cin >> B2;

	cout << A2;
	cout << B2;

	C2 = A2 - B2;

	cout << "\n\nA1 - B1: ";
	cout << C2;
	cout << C2.operator std::string();

	C2 = A2 / B2;
	cout << "\n\nA1 / B1: ";
	cout << C2;
	cout << C2.operator std::string();

	FuzzyNumber_Public G;
	G = FuzzyNumber_Public::Function(A2, B2);
	cout << endl << "1 / A: " << endl << "(" << G.GetX() << ";" << G.GetL() << ";" << G.GetR() << ")" << endl << endl;

	return 0;
}
