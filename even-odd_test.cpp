#include<iostream>


long long int n;

int main(){
	std::cout <<"Give me a number:";
	std::cin >>n;
	
	// % = remainder operator (aka modulus (mod))
	if (n % 2 == 0) {
		std::cout <<std::endl <<n <<" is even, (or an error)" <<std::endl;
	} else {
		std::cout <<std::endl <<n <<" is an odd number" <<std::endl;
	}
}


