#include <iostream> //std::cout

//example function using pointers (C-compatable)
void increaseBy5(int* number); 

//example function using reference parameters (C++ only)
void add5(int& number); 


int main(){
  
  int x; 
	
	std::cout <<"x = ";
	std::cin >>x;
	
	std::cout <<"\nx = " <<x;
	
	increaseBy5(&x); // NOTE: we have to use the address-of operator here
	
	std::cout <<"\n x is now = " <<x;
	
	add5(x); // look at how simple this looks...
	
	std::cout <<"\n x is now = " <<x;
	
}

void increaseBy5(int* number){ //pointers version (backward compatible)
	*number += 5;
}

//An Important thing to note is that this won't work with constants.
// (gives errors and doesn't make sense)
// to practice this try replacing `x` in line 20 with a numerical constant. (ie - `6`)

void add5(int& number){ //reference-parameters version (simpler)
	number += 5;
}
