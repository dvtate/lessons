#include <iostream>
#include <math.h> // round()

int main(){

	double m, b;
	
	std::cout <<"\nm = ";
	std::cin >>m;
	std::cout <<"b = ";
	std::cin >>b;

	long int xMin, xMax;
	std::cout <<"\nx-min = ";
	std::cin >>xMin;
	std::cout <<"x-max = ";
	std::cin >>xMax;

	// going from highest to lowest
	if (xMin > xMax) {
		long int minCpy = xMin;
		xMin = xMax;
		xMax = minCpy;
	}

	// print a number of bricks coresponding to the output
	for (; xMin <= xMax; xMin++) {
		// print the domain value
		std::cout <<std::endl <<xMin <<"\t: ";
		long int range = round(m * xMin + b);

		// print the sign and 
		if (range == 0) // value is zero
			std:: cout <<"(0)";

		
		else if (range > 0) {

			std::cout << "(+) ";

			for (; range > 0; range--)
				std::cout <<"█";
		
		} else {
			std::cout << "(-) ";

			for (; range < 0; range++)
				std::cout <<"█";
		}

	}

	std::cout <<std::endl;
}
