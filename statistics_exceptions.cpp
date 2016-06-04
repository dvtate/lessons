#include <iostream> // std::string, std::cout, std::cin
//#include <inttypes.h> 

//this function is recursive (calls itself)
long int fac(short int base, long int value = 1){ // factorial
    
	// negative numbers give errors
	if (base < 0) 
		throw "fac(): Can't factorial negative numbers.";

	// multiply in the next number	
	if (base > 1) {
		value *= base--;
		return fac(base, value);
	}
	return value;
}

long int combinations(int n, int r){

	// negative numbers give errors
	if (n < 0 || r < 0) 
		throw "combinations(): n and r must be postive.";

	// this prevents us from getting errors from fac(n-r)
	// and is required to get the correct answer	
	if (n < r) return 0;

	// save resources and prevent errors
	if (r == n) return 1;

	// formula = n! / ((n-r)!r!)
	return (fac(n) / ( fac(n - r) * fac(r) ));
}

int main(){

	// factorial example
	int number;

	std::cout <<"Enter the number to factorial: ";
	std::cin >>number;

	//raw user-input is dangerous
	try {
		std::cout <<fac(number) <<std::endl ;
	} catch (char const* e) {
		std::cerr <<"Yo input sucks.\n" <<e <<std::endl;
	}

	// combinations example
	int n, r;
	
	std::cout <<"\nEnter the values for nCr:\n  n = ";
	std::cin >>n;
	std::cout <<"  r = ";
	std::cin >>r;

	//raw user-input is dangerous
	try {
		std::cout <<'\n' <<n <<" nCr " <<r <<" = " <<combinations(n, r) <<std::endl;
	} catch (char const* e) {
		std::cerr <<"Yo input sucks.\n" <<e <<std::endl;
	}
}
