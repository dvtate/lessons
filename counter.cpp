#include <iostream>


int main(){

	int end;

	std::cout <<"ENTER an integer: ";
	std::cin >>end;
	std::cout <<"lets count to "<<end <<std::endl <<std::endl;


	if (end > 0) // counting up
		for (int i = 0; i <= end; i++)
			std::cout <<i <<'\n';
	else // counting down (or end == 0)
		for (int i = 0; i >= end; i--)
			std::cout <<i <<'\n';
}
