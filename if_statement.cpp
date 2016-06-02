#include <iostream> //std::cin. stc::cout

/*Single-statement if statements
*the if statements here only run one statement, so they
*don't need braces ("{}"). Multi-statement if statements
*look like:
*
	if(condition){
		//do something...
	}
*	
*you can always use a multi-statement if statement in place
*of a single-statement if statement, but never the other way
*around.
*/



int main(){

	char goAgain;//holds the user input.
	
	std::cout <<"\nI <3 you!\n";
	
	std::cout <<"Would you like me to tell you again? (y/n) ";//prompt
	std::cin >>goAgain;
	
	if (goAgain == 'y' || goAgain == 'Y') // yes
		return main(); //call main again to start program over
		
	else if(goAgain == 'n' || goAgain == 'N') // no
		return 0; //successfull quit
		
	else
		std::cout <<"\nYou idiot!!! That wasn't an option!\n";
}
