#include<iostream>
#include<cmath> // pow

void decToFrac(long double dec, long& numerator, long& denominator);
void fracSimp(long& numerator, long& denominator);

///finds GCF using Euclid's Algorithm (recursive)
template <class T>T gcf(T a, T b){
	
	if (a % 1 != 0 || b % 1 != 0) //throw error if numbers aren't whole (fractions don't have gcfs)
		throw std::runtime_error("GCF(): Numbers given weren\'t whole");
	if (b == 0) return a;
	
	return gcf(b, a % b);
}

int main(){
	long double dec;
	std::cout <<"Decimal to fraction converter\n\nEnter a number:";
	std::cin >>dec;

	long num,den;//initialize numerator and denominator variables
	decToFrac(dec, num, den);//assign fraction values
	std::cout <<"\n = "<<num <<" / " <<den <<std::endl;
	return 0;
}

void decToFrac(long double decimal, long& numerator, long& denominator){
	///assigns the numerator and denominator to the (simplified) fraction which is equal to the given decimal
	if (decimal == 0L) {//zero entered (0/1)
		numerator = 0;
		denominator = 1;
		return;//stop function
	}
	
	if ((decimal - (long int) decimal) == 0) {//integer entered (decimal/1)
		numerator = (long int) decimal;
		denominator = 1;
		return;//stop function
	}

	//handle negative numbers
	signed char isNegative = 1;
	if (decimal < 0)
		isNegative = -1;

	unsigned long after = 0;//places after the decimal
	long double dec_copy = decimal;//copy of decimal value

	//count number of places after the decimal:
	while((dec_copy - (unsigned long int) dec_copy) > 0){//while it has numbers after decimal place
		dec_copy *= 10;//move decimal place back one
		after++;//increment places after decimal counter
	}
	numerator = isNegative * decimal * pow(10, after);//number without decimal place (12.2340 -> 122340)
	denominator = pow(10, after); // 12.234 -> 1000
	fracSimp(numerator, denominator); // simplifies fraction
}

void fracSimp(long int& numerator, long int& denominator){
	///simplifies the given numerator and denominator (reference parameters)
	long int fracGCF = gcf(numerator,denominator);
	numerator /= fracGCF;
	denominator /= fracGCF;
}
