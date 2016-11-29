#include <stdio.h> // printf()

#include <stdlib.h> // malloc(), free()
#include <string.h> // strcpy()


// you can compile this just as you would a C++ program.
// however, using gcc instead of g++ is cooler. :) 

int main(){

	// declaring our strings
	char *firstWord, *secondWord;

	// although the compiler is smart enough to create const strings,
	// we can use malloc to allocate some memory for strings which we
	// can change. :)
	
	// there are 6 characters in "HAPPY" including the null terminator
	// each character uses 1 byte of memory so we allocate 6 bytes and
	// point firstWord to the empty memory.
	firstWord = (char*) malloc(6); // 'H', 'A', 'P', 'P', 'Y', '\0'
	secondWord = (char*) malloc(10);

	// copy the words into the memory you have allocated.
	strcpy(firstWord, "HAPPY");
	strcpy(secondWord, "BIRTHDAY");

        // lets print the words to the console :)
	printf("%s %s!\n", firstWord, secondWord);


	// any memory allocated via malloc must be free()'ed to prevent
	// memory leaks. Here it isn't needed since the memory is freed
	// when the program ends, but it's a good habit to get into.
	free(firstWord);
	free(secondWord);

}
