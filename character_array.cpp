#include<iostream>

/// treating an array of characters as a string 
int main(){

	// Let's declare the first array of strings the way I like. (using an initializer list)
	char firstWord[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
	//                ^ NOTE: the equals sign is optional


	//alternative way of defining an array
	char secondWord[10];

	// assign each element individually
	secondWord[0] = 'b';
	secondWord[1] = 'i';
	secondWord[2] = 'r';
	secondWord[3] = 't';
	secondWord[4] = 'h';
	secondWord[5] = 'd';
	secondWord[6] = 'a';
	secondWord[7] = 'y';
	secondWord[8] = '!';
	secondWord[9] = '\0'; // note the terminating null character 
	                      // '\0' = 0

	char fullSentence[2][9]; // declare a matrix (2D array)

	for (int i = 0; i < 6; i++) // copy values in the first word to the first element of the matrix
		fullSentence[0][i] = firstWord[i];

	for (int i = 0; i < 10; i++) // copy values in the second word to the second element of the matrix
		fullSentence[1][i] = secondWord[i];

	std::cout <<fullSentence[0] <<' ' <<fullSentence[1] <<std::endl;

}
