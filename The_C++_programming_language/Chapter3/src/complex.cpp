/*
 * complex.cpp
 *
 *  Created on: Feb 4, 2020
 *      Author: daniel
 */

#include "complex.hpp"


complex operator/(complex a, complex b) { return a/=b; }
complex operator+(complex a, complex b) { return a+=b;}
complex operator-(complex a, complex b) { return a-=b; }
complex operator-(complex a) { return {-a.real(), -a.imag()}; }
complex operator*(complex a, complex b) { return a*=b; }


