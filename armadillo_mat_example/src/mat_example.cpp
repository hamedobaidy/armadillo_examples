/*
 ============================================================================
 Name        : mat_example.cpp
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
	double x = A(1,2);
	cout << "x = " << x << endl;

	mat B = A + A;
	B.print("B = A + A:");
	mat C = A * B;
	C.print("C = A * B:");
	mat D = A % B;
	D.print("D = A % B:");

	cx_mat X(A,B);
	X.print("X = cx_mat X(A, B):");

	B.zeros();
	B.print("B zeros():");
	B.set_size(10,10);
	B.print("B set to (10, 10):");
	B.ones(5,6);
	B.print("B ones(5, 6)");

	mat E(4,5, fill::zeros);
	E.print("E:");

	mat::fixed<5,6> F;
	F.print("F:");

	double aux_mem[24];
	mat H(&aux_mem[0], 4, 6, false);  // use auxiliary memory
	H.print("H:");

	return 0;
}
