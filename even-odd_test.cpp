#include<iostream>


long long int n;

int main(){
	std::cout <<"Give me a number:";
	std::cin >>n;
	
	// % = remainder operator (aka modulus (mod))
	if (n % 2 == 0) // if the number is evenly divisible by 2 then it's even.
		std::cout <<std::endl <<n <<" is even, (or is it an error?)" <<std::endl;
	else
		std::cout <<std::endl <<n <<" is an odd number" <<std::endl;
}


