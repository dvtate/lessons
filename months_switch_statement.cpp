#include <iostream> // std::xcin, std::cout, 


// Here `unsigned char` is used to store a number and not a letter.

// A `char*` (character pointer) is a string, since a string is just an array of `char`s
// The character pointer points to the first element and you can increment/decrement it
// to see the rest of the elements.
// If this confuses you, you can replace `char*` with `std::string`
// which isn't optimized, but is often easier to grasp.
char* numberToName(unsigned char monthNum){
	/// returns a string which is the name of the month corresponding 
	/// to the given number.
	
	
	switch (monthNum) {
	case 1://code between the case and "break;" is run if monthNum = 1
		return "January";
		break;
	case 2: 
		return "Febuary"; // in this example, calling `break` is redundant since execution exits
		break;            // after the function `return`s a string.
	case 3: 
		return "March"; 
		break;
	case 4: 
		return "April"; 
		break;
	case 5: 
		return "May"; 
		break;
	case 6: 
		return "June"; 
		break;
	case 7: 
		return "July"; 
		break;
	case 8: 
		return "August"; 
		break;
	case 9: 
		return "September"; 
		break;
	case 10: 
		return "October"; 
		break;
	case 11: 
		return "November"; 
		break;
	case 12: 
		return "December"; 
		break;
	default:
		return "invalid";
		break;
	}
	//this will never get returned.
	return "an error :P";
}


int main(){
	int mn; // declare month number
	 
	std::cout <<"Month Number: "; // prompt
	
	std::cin >>mn; // get input
	
	std::cout <<"The month is " <<numberToName(mn) <<"\n\n"; // print it out (call function)
	
	
	// infinite loop...
	return main(); // keep playing
}
