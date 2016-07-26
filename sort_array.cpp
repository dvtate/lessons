#include <iostream>

// this function is the core of this program :D
template<class T>
void sortArray(T* arr, size_t length){
	
	//for each element of the array...
	for (length; length > 0; length--, arr++) {

		T maxValue = *arr;
		T* swapVal = arr;

		//find the largest remaining number
		for (size_t i = 0; i < length; i++)			
			if (maxValue < *(arr + i)) {
				maxValue = *(arr + i);
				swapVal = arr + i;	
			}
		
		// switch elements' locations in the array
		T temp = *arr;
		*arr = *swapVal;
		*swapVal = temp;
	}

}


int main(){

	std::cout <<"How many numbers to sort?\n";
	
	size_t length; // NOTE: size_t = unsigned long int
	std::cin >>length;

	// allocate some memory to hold our array
	long double userArray[length];

	std::cout <<"Enter " <<length <<" numbers:\n";

	for (size_t i = 0; i < length; i++)
		std::cin >>userArray[i];
	
	//sort the array
	sortArray(userArray, length);	


	// print the array
	std::cout <<"\nin numerical order:\n";
 
 	std::cout <<userArray[0];	
	for (size_t i = 1; i < length; i++)
		std::cout <<", " <<userArray[i];

	// terminating newlines are nice
	std::cout <<std::endl;


}
