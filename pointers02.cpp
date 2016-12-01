#include <iostream>


/*

inline void doubleValue(int* var)
	{ *var *= 2; }

// this example uses references
inline void doubleValue(int& var)
	{ var *= 2; } // set var = to itself * 2

// inline functions are faster as they avoid the overhead associated with
// normal function calls, but they make your program bigger. You should
// only inline very small functions which are only called in a few places

*/

// by making this a template we can pass in any value and it will try and
// multiply it by 2. try changing the type of `var` to `float`
template <class T>
inline void doubleValue(T& val)
	{ val *= 2; }
	


int main(){
	
		int var = 6;
		std::cout <<"before = " <<var <<std::endl;
		
		//doubleValue(&var); // we have to pass the address for the pointer example
		doubleValue(var);
		
		std::cout <<"after = " <<var <<std::endl;	
	
}
