#include <iostream>
#include <vector>
#include <string>

int longestLenStr(std::vector<std::string> words)
{

    int longest = words[0].length();
    
    for (std::string word : words)
        if (word.length() > longest)
            longest = word.length();
            
    return longest;
}

void printInFrame(std::vector<std::string> words)
{
	int width = longestLenStr(words);
	for (int i = 0; i < width +4; i++)
		std::cout<<'*';
		std::cout <<std::endl;


	for (auto word : words){
		std::cout<<"* "<<word;
		unsigned int spaces = width - word.length();
		for (int i = 0; i < spaces; i++)
			std::cout<<" ";
		std::cout<< " *\n";
	}
	for (int i = 0; i < width +4; i++)
		std::cout<<'*';
	std::cout<<std::endl;


}
