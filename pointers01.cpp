#include <iostream>


int main(){

	// Pointers are a type to used to store memory addresses. 
	// The type of the pointer tells what it points to, this will become
	// more important later on. 
	
	// & = address-of operator - gives the memory address of the variable
	// * = deference operator - gives the data at that memory address


	int a = 666;
	std::cout <<"a = " <<a <<std::endl;
	std::cout <<"a is at " <<&a <<std::endl;

	// aptr points to a
	int* aptr = &a;
	std::cout <<"aptr = " <<aptr <<std::endl;
	std::cout <<"the value at aptr\'s address is " <<*aptr <<std::endl;
	std::cout <<"the address of aptr is " <<&aptr <<std::endl;

	// A pointer can point to another pointer, and so on, this
	int** aptrptr = &aptr;
	std::cout <<"aptrptr = " <<aptrptr <<std::endl;
	std::cout <<"the value at aptrptr's address is " <<*aptrptr <<std::endl;
	std::cout <<"the value at the value at aptrptr's address is " <<**aptrptr <<std::endl;

} 
