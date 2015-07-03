/*
 ============================================================================
 Name        : armadillo_eval.cpp
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
	cx_mat A( randu<mat>(4,4), randu<mat>(4,4) );
	A.print("A:");

	real(A).eval().save("A_real.dat", raw_ascii);
	mat B;
	B.load("A_real.dat");
	B.print("B:");
	imag(A).eval().save("A_imag.dat", raw_ascii);
	mat C;
	C.load("A_imag.dat");
	C.print("C:");

	return 0;
}
