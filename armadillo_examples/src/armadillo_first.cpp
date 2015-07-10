/*
 ============================================================================
 Name        : armadillo_first.cpp
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

int main(int argc, char** argv)
  {
  mat A = randu<mat>(4,5);
  mat B = randu<mat>(4,5);

  cout << A*B.t() << endl;

  return 0;
  }
