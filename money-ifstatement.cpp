#include <iostream> // std::cout


int main() {
	
	// prompt user
	std::cout <<"How many monies? $";

	// get value from user
	float balance;
	std::cin >>balance;
	
	if (balance < 0)
		std::cout <<"RIP feelsbadman\n";
	else if (balance > 1000000000)
		std::cout <<"boi u rich\n";
	else
		std::cout <<"gimme\n";
	

}
