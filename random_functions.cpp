#include <iostream> //cin, cout

/**Functions:
 *-	Functions return a value (using the keyword "return").
 * 
 *-	Functions that don't return a value are called subroutines (subs),
 * 	however they technically return a weird type called a void (holds no data)
 * 
 *-	In C++, functions are treated as variables in respect to their syntax.
 * 	
 *- SYNTAX:
 *	+	DECLARATION:
 * 		* structure>>> type fname(); // NOTE: all declarations end with a semi-colon
 * 		bool isAutonomous();
 * 		void stopRobot(void);//NOTE: void is also a keword, so this is legal
 * 		bool isGreaterThan(int num1, int num2);
 * 		int sum(int num1, int num2);
 * 		char guessAnswer(void); 
 * 
 * 	+	DEFINITION:
 * 		* structure>>> type fname(){ /* code that gets run * /  return value;}
 * 
 * 		int sum(int a, int b){
 * 			return a + b;
 * 		}
 * 		
 * 		char guessAnswer(Question_t theQuestion){
 * 			//notice the Question_t type (an object) that is a parameter
 * 			//disregards the question because c is always the answer
 * 			return 'c';
 * 		}
 * 
 * 		bool isGreaterThan(int num1, int num2){
 * 			return(num1 > num2); //return looks like a subroutine
 * 		}
 * 
 * 		void stopRobot(void){ // the void keyword is legal here too 
 * 			//stop the program by throwing an exception (intentional error)
 * 			throw 20;
 * 			//you don't have to return anything, but if you need to stop the sub, you can use return
 * 			return;
 * 		}
 * 
 */




//all functions must be declared if defined after main after main() (look for definition on line: 83)
int getNegative(int number);//note arguments must also be defined


//short functions can be defined in the same place they are declared (And I won't kill you)
int randomNumber()//this function renturns an integer (int)
	{return 6;}

int main(){//int main is technically a function that returns an int type.

	int randInt = randomNumber(); //really not needed, but still

	//print stuff out:
	std::cout	<<"\n1-This is a random number: " <<randInt <<std::endl
				<<"\n2-This is the negative of that number: " <<getNegative(randInt) <<std::endl
				<<"\n3-This calls the same function as the first one (equally random): "
				<<randomNumber() <<std::endl
				<<"\n4-You can set a function as another funciton\'s parameter: "
				<<getNegative(randomNumber()) <<std::endl;
	
	
	//start ignore --------------------------------------------------------------------		
		std::cout <<"\nXDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
		std::cin.ignore(); // 
		
		std::cout <<"Don\'t get it?";
		std::cin.ignore();
		
		std::cout <<"Run this program several times then you will get it.\n";
		std::cin.ignore();	
	//end ignore ----------------------------------------------------------------------
	
}

int getNegative(int number){//this function takes an int as an argument

	int localVarNegativeVersionOfInput = - number; //this name is way too long and you don't actually need a variable
	return localVarNegativeVersionOfInput;	
}

/*A note about randomness:
* It is hard to tell if a number is truely random
* so our function which always returns 6, technically could be random, however the
* likeliness of it actually being random and returning 6 10000000000times is essentially
* zero.
*/
