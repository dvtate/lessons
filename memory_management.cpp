#include <iostream>

// A good way to think about programming in low-level languages like
// C/C++ and assembly is just manipulating memory. Moving it allocating
// reallocating and deallocating it, etc. 

// although programmers who use languages like Java, javascript, etc.
// like to complain about having to manage their memory manually, I personally
// think it is a useful feature of the language. (except when I make a
// nasty memory leak... XDDD)

// here's a really short example I modified from the internet to help
// you play with memory management safely you might want to look at
// pointers before this...


int main(){
	char *p = NULL; //empty pointer
	if (p) // evaluates to false as the pointer points to nothing 
		std::cout <<"This won't get displayed!\n";
	
	p = new char[50];//allocate some memory
		
	if (p) {//memory has been allocated so this test will pass
		for (unsigned char i = 0; i != 50; i++) {
			char &v = *(p + i); // create a reference to 
			v = 75; // set the character to K
		}

		// print out those K's 		
		for (unsigned char i = 0; i != 50; i++)
			std::cout <<*(p + i);

		// de-allocate the memory
		delete[] p;

		std::cout <<"\n";

		// apparently doesn't delete it all
		for(size_t i = 0; i != 50; i++) 
			std::cout <<*(p + i);

	}
}
