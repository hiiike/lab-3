#include "D3.h"

D3::D3(int d1 = 0, int d2 = 0, int d3 = 0, int b1 = 0, int b2 = 0, int b3 = 0) : D2(b1, b2, b3, d1, d2) { this->d3 = d3; }
D3::~D3() {}

void D3::show_D3()
{
	cout << "Class D3" << endl;
	show_D2();
	cout << "show_D3()" << endl;
	cout << "D3::d3 = " << d3 << endl;
}
