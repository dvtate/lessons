#include <iostream>

inline void printArray(int* arr, size_t len)
{
	// if a NULL pointer is given (ponter to 0x0)
	// commonly used to mean (no value)
	if (!arr)
		return;
	
	// how could we print a zero length array?
	if (len == 0)
		return;
		
	// print the first number
	std::cout <<*arr++;
	
	// , number, number... 
	// i starts at 1 because we've already printed the 1st element
	for (size_t i = 1; i < len; i++)
		std::cout <<", " <<*arr++;


}


int main(){

	int arr[6] = { 6, 66, 666, 6666, 66666, 666666 };
	
	printArray(arr, 6);
	
	// This will cause a segfault, as this is a reservered memory location.
	// Although 0x0deadbeef is a valid memory address, we don't have permission
	// to access it.
	//printArray((int*) 0x0deadbeef, 6);
	
	
	/* here's some more work with references
	int a = 5; // sets a = 5
	int& b = a; // makes `b` a reference to `a`
	
	b = 666; // sets a = 666
	
	std::cout <<a;

	*/
	
}
