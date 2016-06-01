#include <iostream>

int main(){

	char goAgain; // y or n resonse

	std::cout <<"\nYou're awesome.\n"
	          <<"Would you like me to tell you again? (y/n): ";
	std::cin >>goAgain;
	
	
	// remember character constants are contained in single quotes.
	// and string constants are in 
	
	if (goAgain == 'y' || goAgain == 'Y') // y entered
		return main(); // run the program again
	else if (goAgain == 'n' || goAgain == 'N') // n entered
		return 0; // end the program
		


	// if the user is an idiot (give them more chances)
	// try again while not y or n
	while (goAgain != 'y' && goAgain != 'Y' && goAgain != 'n' && goAgain != 'N') {
	
		std::cout <<"\nI didn't understand, please try again: ";
		std::cin >>goAgain;

		if (goAgain == 'y' || goAgain == 'Y') // y entered
				return main(); // start over the program
			else if (goAgain == 'n' || goAgain == 'N') // n entered
				return 0; // end the program
	}


}
