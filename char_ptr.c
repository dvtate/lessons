#include <stdio.h>

// C is a subset of C++...
// I only made this a C program because modern C++ compilers give 
// warnings about setting a character pointer to a string constant.

// you can compile this just as you would a C++ program.
// however, using gcc instead of g++ will give better results. 


int main(){

	char *firstWord, *secondWord;

        // this also allocates memory :D
	firstWord = "HAPPY"; // 'H', 'A', 'P', 'P', 'Y', '\0'

	secondWord = "BIRTHDAY!";

        // std::cout is easier IMO...
	printf("%s %s\n", firstWord, secondWord);

}
