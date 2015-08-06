/*
 ============================================================================
 Name        : armadillo_solve.cpp
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Armadillo solve example.
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(void) {
	mat A = randu<mat>(5,5);
	A.print("A:");
	vec b = randu<vec>(5);
	b.print("b:");
	mat B = randu<mat>(5,5);
	B.print("B");

	vec x = solve(A, b);
	x.print("x:");
	mat X = solve(A, B);
	X.print("X:");

	vec x2;
	solve(x2, A, b);
	x2.print("x2");

	return 0;
}
