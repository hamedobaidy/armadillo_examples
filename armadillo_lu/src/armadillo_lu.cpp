/*
 ============================================================================
 Name        : armadillo_lu.cpp
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(void) {
	mat A = randu<mat>(5,5);
	A.print("A:");

	mat L, U, P;

	lu(L, U, P, A);
	L.print("L");
	U.print("U:");
	P.print("P:");

	mat B = P.t()*L*U;
	B.print("B:");

	return 0;
}
