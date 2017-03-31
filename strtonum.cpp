#include <iostream>
#include <stdlib.h> // malloc()
#include <stdio.h> //puts(), gets(), printf()
#include <string.h> // strlen() 
#include <inttypes.h> // fixed width integer types
#include <math.h> // pow()

// the function prototypes
inline int8_t chartonum(const char&);	// returns numerical value of single digit
char* firstDecimal(char*);				// returns address of first decimal
int32_t strtoint(char const*);			// converts a string to an int
double strtodbl(char const*);			// converts an string to a double

int main(){
	
	//allocate 25 digits worth of memory for the user's number
	char* strNum = (char*) malloc(25);
	
	puts("Give me a number, I'll divide it by 2.\n");
	double ans;
	gets(strNum);
	try {
		ans = strtodbl(strNum);
	} catch (char const* e) {
		puts(e);
	}

	// http://www.cplusplus.com/reference/cstdio/printf/
	printf("(%s / 2) = %f\n", strNum, ans / 2);
}

// converts a digit into a number
inline int8_t chartonum(const char& num){
	switch (num) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: throw "chartonum(): invalid character given.";
	}
	
}

// converts a string into an int
int32_t strtoint(char const* str){

	// skip any preceeding spaces
	while (*str == ' ') str++;

	// determine if it's positive or negative	
	signed char sign = 1;	
	if (*str == '-') {
		sign = -1;
		str++;
	}
	
	// in case there's a space between the number and the decimal 
	while (*str == ' ') str++;	
	
	// get signifigance of the first digit
	uint16_t pwr = strlen(str), ret = 0;
	
	// iterate through the digits summing up the value
	while (*str)
		ret += chartonum(*(str++)) * pow(10, --pwr);	
	return sign * ret;
}

// finds address of first decimal
char* firstDecimal(char* str){
	// increment until reaching a decimal or the end of the string
	while (*str != '\0' && *str != '.') 
		str++;
	
	// return null if there are no decimals
	if (*str == '\0') 
		return (char*) NULL;
	
	return str;
}

// converts a string to a double
double strtodbl(char const* str){
	double ret = 0;

	const char* cpy = str;

	// skip any preceeding spaces
	while (*str == ' ') str++;
	
	// mark whether or not it's negative
	int8_t sign = 1;
	if (*str == '-') {
		sign = -1;
		str++;
	}

	// in case there's a space between the number and the decimal 
	while (*str == ' ') str++;
	
	// find the signifigance of the fist digit
	int16_t pwr; // power of the first digit (10^x)
	char* dec = firstDecimal((char*)str); // addr. of the first decimal
	if (dec == NULL) // no decimals
		pwr = strlen(str) - 1;
	else pwr = dec - str - 1;
	
	int decimalCount = 0;
	
	// iterate through the characters
	while (*str) {
		if (*str == '.')// skip decimal
			if (str++ != dec) { // > 1 decimals
				throw strcat(strcat("strtodbl(\"", cpy), "\") invalid number (too many decimals)");
			}
		ret += chartonum(*str) * pow(10, pwr--); // assumes base-10 number-system
		str++; //next digit
	}
	return sign * ret; 
}
