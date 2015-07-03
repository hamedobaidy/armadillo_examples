/*
 ============================================================================
 Name        : armadillo_field.cpp
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
	// create a field containing vectors
	field<vec> F(3,2);

	// each vector in the field can have an arbitrary size
	F(0,0) = vec(5);
	F(1,1) = randu<vec>(6);
	F(2,0).set_size(7);

	// access element 1 of vector stored at 2,0
	double x = F(2,0)(1);

	// copy a row of vectors
	F.row(0) = F.row(2);
	F.print("F:");

	// extract a row of vectors from F
	field<vec> G = F.row(1);

	// print the field to the standard output
	G.print("G =");

	// save the field to a binary file
	G.save("vec_field");

	return 0;
}
