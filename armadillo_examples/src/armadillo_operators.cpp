/*
 ============================================================================
 Name        : armadillo_operators.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Armadillo operators example.
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(void) {
	mat A = randu<mat>(5,10);
	A.print("A =");
	mat B = randu<mat>(5,10);
	B.print("B =");
	mat C = randu<mat>(10,5);
	C.print("C =");

	mat P = A + B;
	P.print("P = A + B =");
	mat Q = A - B;
	Q.print("Q = A - B =");
	mat R = -B;
	R.print("R = -B =");
	mat S = A / 123.0;
	S.print("S = A / 123.0 =");
	mat T = A % B;
	T.print("T = A% B =");
	mat U = A * C;
	U.print("A * C =");

	// V is constructed without temporaries
	mat V = A + B + A + B;
	V.print("V = A + B + A + B");

	imat AA = "1 2 3; 4 5 6; 7 8 9;";
	AA.print("AA =");
	imat BB = "3 2 1; 6 5 4; 9 8 7;";
	BB.print("BB =");

	// compare elements
	umat ZZ = (AA >= BB);
	ZZ.print("ZZ =");

	return 0;
}
