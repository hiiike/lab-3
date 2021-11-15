#include <iostream>
#include "D3.h"

int main()
{
    B1 ob1(1);
    cout << "\n\nB1 ob1(1)" << endl;
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << "Hierarchy of class B1" << endl;
    ob1.show_B1();

    B2 ob2(3);
    cout << "\n\nB2 ob2(2)" << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << "Hierarchy of class B2" << endl;
    ob2.show_B2();

    B3 ob3(3);
    cout << "\n\nB3 ob3(3)" << endl;
    cout << "sizeof(B3) = " << sizeof(B3) << endl;
    cout << "Hierarchy of class B3" << endl;
    ob3.show_B3();

    D1 ob4(4, 5, 6);
    cout << "\n\nD1 ob4(4,5,6)" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << "Hierarchy of class D1" << endl;
    ob4.show_D1();

    D2 ob5(6, 7, 8, 9, 10);
    cout << "\n\nD2 ob5(6,7,8,9,10)" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << "Hierarchy of class D2" << endl;
    ob5.show_D2();


    D3 ob6(1, 2, 3, 4, 5, 6);
    cout << "\n\nD3 ob6(1, 2, 3, 4, 5, 6)" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << "Hierarchy of class D3" << endl;
    ob6.show_D3();

    return 0;
}