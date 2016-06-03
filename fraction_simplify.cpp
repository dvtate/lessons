#include<iostream> // std::cin, std::cout, std::string()

///finds GCF using Euclid's Algorithm ( https://en.wikipedia.org/wiki/Euclidean_algorithm#Implementations (converted to C++))
template <class T>
T gcf(T a, T b){

	//throw error if numbers aren't whole ( % = remainder: aka 'modulus')
	if (a % 1 != 0 || b % 1 != 0)								// could be simplified to `if (a % 1 || b % 1)` (as 0 == false)
		throw std::string("GCF(): Numbers given weren\'t whole"); //error stops execution

	if (b == 0) return a; 										// could be simplified to `if (!b) return a;` (as 0 == false)
	//else
	return gcf(b, a % b);
}

///simplifies the given numerator and denominator (reference parameters)
template <class T>
void fracSimplify(T& numerator, T& denominator){
	//find the GCF/GCD
	T fracGCF = gcf(numerator, denominator);

	//divide numerator and denominator by their GCF
	numerator /= fracGCF;
	denominator /= fracGCF;
}

int main(){

	//initialize numerator and denominator variables as 32bit integers
	int32_t num, den;

	//comand input
	std::cout <<"\nEnter Numberator: ";
	std::cin >>num;
	std::cout <<"\nEnter Denominator: ";
	std::cin >>den;

    // show input being processed (try putting a string in)
	std::cout <<'\n' <<num <<" / " <<den;
	
	//simplify the fraction
	fracSimplify(num, den);	//the function changes the values of num and den
	
	// anything over 1 is a whole number
	if (den == 1)
    std::cout <<" = \n" <<num <<'\n';
  else    
    std::cout <<" = \n"<<num <<" / " <<den <<'\n';
	    
}
