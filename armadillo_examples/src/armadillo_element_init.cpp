/*
 ============================================================================
 Name        : armadillo_element_init.cpp
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Armadillo element initialization example.
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(void) {
	mat A;

	A << 1 << 2 << 3 << endr
	  << 4 << 5 << 6 << endr;
	A.print("A:");

	mat B = { 1, 2, 3, 4, 5, 6 };  // C++11 only
	B.print("B:");
	B.reshape(2,3);
	B.print("B reshape:");
	return 0;
}
