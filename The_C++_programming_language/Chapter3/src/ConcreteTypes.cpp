//============================================================================
// Name        : ConcreteTypes.cpp
// Author      : Daniel Topor
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "complex.hpp"


void f(ConcreteTypes::complex z)
{
	ConcreteTypes::complex a {2,3};
	// construct {2.3,0.0} from 2.3
	//ConcreteTypes::complex b {1/a};
	//ConcreteTypes::complex c {a+z*ConcreteTypes::complex{1,2.3}};
	// ...
	//if (c != b) c = -(b/a)+2*b;
}


int main() {

	std::cout << 1 << std::endl;
	ConcreteTypes::complex c1 {2,3};
	std::cout << 2 << std::endl;

	f(c1);
	std::cout << 3 << std::endl;

	return 0;
}
