#include<iostream> //std::cin, std::cout

int main(){
	
	char response;//single letter that holds the user's response (y/n)
	
	std::cout <<"\n      Quit program (y/N)? ";
	std::cin >>response;
	
	//single expression if statement:
	if (response == 'y' || response == 'Y')
		return 0;
	else if (response == 'n' || response == 'N')
		std::cout <<"         Yay, you\'re awesome!\n";
	else //user is weird
		std::cout <<"         You're really pushing my buttons...\n";
	
	
	//Ask them again: 	
	std::cout <<"\n      Last chance: Quit program (y/N)? ";
	std::cin >>response;
	
	//normal if statement. 
	if (response == 'y' || response == 'Y') {
		
		std::cout <<"         You chose to quit. Are you sure (Y/n)? ";
		std::cin >>response;
		
		if (response == 'y' || response == 'Y')
			return 0;//ends program
		else if (response == 'n' || response == 'N')
			std::cout <<"            Yay, you\'re awesome!\n";
		else 
			std::cout <<"            You need to learn to type\n";
			
	} else if (response == 'n' || response == 'N') {
		std::cout <<"         Yay, you\'re awesome!\n";
	} else { //user is weird
		std::cout <<"      You're really pushing my buttons...\n";
	}

}
