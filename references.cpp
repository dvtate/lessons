#include <iostream>

int main(){
		
	int a = 5; 
	int& aRef = a;
	
	aRef *= 10000; // this also changes the value of a since aRef is a reference to a
	
	std::cout <<"aRef = " <<aRef <<std::endl;
	std::cout <<"a = " <<a <<std::endl;
	
	
}
