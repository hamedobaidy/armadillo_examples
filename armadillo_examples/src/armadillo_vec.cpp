/*
 ============================================================================
 Name        : armadillo_vec.cpp
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Armadillo vector example.
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(void) {
	vec x(10);
	vec y = zeros<vec>(10);
	y.print("v:");

	mat A = randu<mat>(10,10);
	A.print("A:");
	vec z = A.col(5); // extract a column vector
	z.print("z:");

	return 0;
}
