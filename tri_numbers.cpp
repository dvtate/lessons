#include <iostream>

/// triangular number program

int main(){

	std::cout <<"Enter the triangular number to calculate: ";
	uint16_t triNum;
	std::cin >>triNum;
	
	// draw the coresponding triangle
	uint32_t sum = 0;
	for (uint16_t g = 1; g <= triNum; g++) {
		for (uint16_t i = 0; i < g; i++){
		  std::cout <<'*';
		}

		std::cout <<" = " <<g <<'\n';
		
		// add this row to the total
		sum += g; 

	}

	// print the result
	std::cout <<"\nTotal = " <<sum <<std::endl;

}
