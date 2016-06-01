#include <iostream> //std::cin, std::cout, toupper()
#include <cmath> //pow()

//a float is more fit for this as although it will only be holding whole
	//numbers, They will only have one signifigant figure.(1)
float relativeUnitVal(char unit);//returns a value which is relative for each unit which is relative to the values of the other units.

int main(){

	size_t givenSize; // same as `unsigned long givenSize`
	
	char unit1, unit2;
	
	/*abbreviations:
	std::cout 	<<"Units of data storage:\n"
				<<"B = bytes = 8 bits\n"
				<<"K = kilobytes = 1000B\n"
				<<"M = megabytes = 1000K\n"
				<<"G = gigabytes = 1000M\n"
				<<"T = terabytes = 1000G\n"
				<<"P = petabytes = 1000T\n";
	*/
	std::cout <<"\nAmmount of data (ie- 512M):";
	std::cin >>givenSize >>unit1;
	
	std::cout <<"\nDesired unit (ie-M):";
	std::cin >>unit2;
	
	//convert the units to upper case
	unit1 = toupper(unit1);
	unit2 = toupper(unit2);
	
	std::cout	<<"\n" <<givenSize <<unit1 <<" = "
			    	<<(float) givenSize * (relativeUnitVal(unit1) / relativeUnitVal(unit2))
			    	<<unit2 <<std::endl;
}

float relativeUnitVal(char unit){
	// returns a mathematical proxy-value for the given unit
	
	switch (unit) {
		// you may want to replace 1000 with 1024
		case 'B': return pow(1000, 0); break;
		case 'K': return pow(1000, 1); break; // using break is redundant after we return...
		case 'M': return pow(1000, 2); break;
		case 'G': return pow(1000, 3); break;
		case 'T': return pow(1000, 4); break;
		case 'P': return pow(1000, 5); break;
		//in case the user is a dumbass
		default:
			std::cerr <<"\n\n ERROR: The unit " <<unit <<" is invalid!\n";
			throw "relativeUnitVal(): invalid unit"; // thats an error
		break;		
	}
}
