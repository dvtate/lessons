#include <iostream>  //the library we will be using


// NOTE: It is standard to separate this into 3 files, but to keep it simple we won't.

class Fish{
	
	private:
		// making them public would allow the programmer to make unrealistic changes to the object
		int _length;//how long
		std::string _name, _type;
		
	public:

		Fish(std::string type, std::string name, int length);//constructor

		// these member-functions are big, so they shouldn't have inline definitions
		void showfish(); // depict the fish
		void aboutfish(); // give some stats on the fish

		//length functions:
		void grow(int length) // make bigger
			{ _length += length; }

		int getlength()
			{ return _length; }
		
		//name functions:
		std::string getname()
			{ return _name; }

		void setname(std::string name)
			{ _name=name; }//change the fish's name
		
		//type functions:
		std::string gettype()
			{ return _type; }

};

// fish.cpp 

Fish::Fish(std::string type, std::string name, int length=1){
	_type = type;
	_name = name;
	_length = length;	
}

void Fish::showfish(){//rough(text) depiction of fish
	std::cout <<"<";//print head
	for (int i = 0; i < _length; i++) {//number of equal-signs = length
		std::cout <<"=";
	}
	std::cout<<"><\n";//print tail
}

void Fish::aboutfish(){//prints some fishy statistics
	std::cout <<"~~About Fish~~~~~~~~\n" <<"Name:" <<getname() 
			  <<"\nType: " <<gettype() 
			  <<"\nLength: " <<getlength() 
			  <<"\nLooks like: ";
	showfish();
	std::cout<<"~~~~~~~~~~~~~~~~~~~~\n";
}


int main(){

	// new fish object (an instance of the fish class)
	Fish bubbles("goldfish", "Bubbles", 8);

	bubbles.showfish();
	bubbles.aboutfish();

}
