#include<iostream>


int main(){

	size_t g, i = 0;

	bool isPrime;

	// this program prints primes forever	
	while (true) {//count  up for i (infinite loop)

		g = i - 1;
		isPrime = true;

		while (isPrime == true && g > 1) //test i for primeness
			if (i % g-- == 0)
				isPrime = false;

		if (isPrime == true) 
			std::cout <<i <<endl;

		//save resources by incrementing two (since evens aren't prime)
		if (++i >= 4) 
			i++;
	}
}
