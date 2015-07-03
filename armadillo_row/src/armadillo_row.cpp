/*
 ============================================================================
 Name        : armadillo_row.cpp
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
	rowvec x(10);
	x.print("x:");
	rowvec y = zeros<rowvec>(10);
	y.print("y:");

	mat    A = randu<mat>(10,10);
	A.print("A:");
	rowvec z = A.row(5); // extract a row vector
	z.print("z:");

	return 0;
}
