/*
 ============================================================================
 Name        : armadillo_print.cpp
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Armadillo print example.
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(void) {
	mat A = randu<mat>(5,5);
	mat B = randu<mat>(6,6);

	A.print();

	// print a transposed version of A
	A.t().print();

	// "B:" is the optional header line
	B.print("B:");

	cout << A << endl;

	cout << "B:" << endl;
	cout << B << endl;

	return 0;
}
