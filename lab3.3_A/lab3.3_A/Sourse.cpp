#include <iostream>

#include "FuzzyNumber_Private.h"
#include "FuzzyNumber_Public.h"


int main(void) {
	using std::cout;

	std::cout << "\n\nPrivate\n";

	FuzzyNumber_Private A1, B1, C1;
	std::cin >> A1;
	std::cin >> B1;

	cout << A1;
	cout << B1;

	C1 = A1 - B1;

	cout << "\n\nA1 - B1: ";
	cout << C1;
	cout << C1.operator std::string();

	C1 = A1 / B1;
	cout << "\n\nA1 / B1: ";
	cout << C1;
	cout << C1.operator std::string();

	FuzzyNumber_Private K;
	K = FuzzyNumber_Private::Function(A1, B1);
	cout << endl << "1 / A: " << endl << "(" << K.GetX() << ";" << K.GetL() << ";" << K.GetR() << ")" << endl << endl;


	std::cout << "\n\nPublic\n";

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
