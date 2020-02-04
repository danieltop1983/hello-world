/*
 * complex.hpp
 *
 *  Created on: Feb 4, 2020
 *      Author: daniel
 */

#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <iostream>

namespace ConcreteTypes {

class complex {

	double re, im; // representation: two doubles

public:

	complex(double r, double i) :re{r}, im{i}
	{
		std::cout << "constructor with two doubles !!!" << std::endl;
	}

	complex(double r) :re{r}, im{0} {}
	complex() :re{0}, im{0} {}
	// construct complex from two scalars
	// construct complex from one scalar
	// default complex: {0,0}
	double real() const { return re; }
	void real(double d) { re=d; }
	double imag() const { return im; }
	void imag(double d) { im=d; }
	complex& operator+=(complex z) { re+=z.re , im+=z.im; return *this; }
	// add to re and im
	// and return the result
	complex& operator-=(complex z) { re-=z.re , im-=z.im; return *this; }
	complex& operator*=(complex);
	complex& operator/=(complex);
	// defined out-of-class somewhere
	// defined out-of-class somewhere


	//complex operator+(complex a, complex b) { return a+=b;}
	//complex operator-(complex a, complex b) { return a-=b; }
	//complex operator-(complex a) { return {-a.real(), -a.imag()}; }
	//complex operator*(complex a, complex b) { return a*=b; }
	//complex operator/(complex a, complex b) { return a/=b; }

};

} /* namespace ConcreteTypes */

#endif /* COMPLEX_HPP_ */
