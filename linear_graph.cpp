#include<iostream>

void linearGraph(double m, double x, double b){
	//plot y-value at given x-value
	for(int i = 0; i < (m * x + b); i++)//run once for each whole number 
		std::cout <<"█";

	std::cout <<"   : f(" <<x <<")=" <<(float) m * x + b <<" \n" ;
}


int main(){

	float m, b;//f(x) = mx+b
	int x_min, x_max;//min_x <= x <= max_x
		
	// get the function from the user
	std::cout <<"\nSlope: ";
	std::cin >>m;
	std::cout <<"Y-intercept: ";
	std::cin >>b;

	// get the domain from the user
	std::cout <<"X-min: ";
	std::cin >>x_min;
	std::cout <<"X-max: ";
	std::cin >>x_max;
	
	
	if (x_min > x_max) // Doesn't get graphed
		std::cout <<"\nWARNING:\n  Your x-min is greater than your x-max.\n";

	for(int i = x_min; i <= x_max; i++)//iterate through given x-values
		linearGraph(m, i, b);//plot y-value for each x-value	
}
