#include <iostream> //std::string std::cin std::cout


class Fish {
	
	//these are private variables
	std::string _type, _name;
	int _length; 
	
public:	//these are public

  // constructor
	Fish(std::string name, std::string type, int length);

  // destructor
	~Fish()
	  { std::cout <<_name <<" has died\n"; }
	//getters
	std::string getType()
		{ return _type; }

	std::string getName()
		{ return _name; }
		
	int getLength()
		{ return _length; }
	
	//setters
	void setName(std::string name)
		{ _name = name; }
		
	//fishy stuff
	void showFish();//print the fish out
	void grow(unsigned int length){ //make the fish bigger
	  { _length += length; }
  
  void aboutfish();
};

//constructor (makes the fish)
Fish::Fish(std::string name, std::string type, int length){ 
	//set the attributes equal to the parameters
	_name = name;
	_type = type;
	_length = length;
}

void Fish::showFish(){
	std::cout <<"<";//print the head
	for(int i = 1; i < _length; i++) //print the body (based on length)
		{std::cout <<"=";}
	std::cout <<"><"; //print the tail
}


void Fish::aboutfish(){//prints some fishy statistics xD
	std::cout<<"~~About Fish~~~~~~~~\n";
	std::cout<<"Name:"<<getName() <<"\nType: " <<getType() <<"\nLength: "<<getLength() <<"\nLooks like: ";
	showFish();
	std::cout<<"~~~~~~~~~~~~~~~~~~~~\n";
}



int main(){
	Fish* myFish = new Fish("Bubbles","guppy",2);//instanciate your fish
	
	//note that we must use the "->" to call member functions as opposed to the dot (.) operator.
	std::cout << myFish -> getName(); //print the fish's name
	
	std::cout <<"\n\n";//newline, newline
	
	myFish -> showFish();//show the fish
	
	myFish->grow(3);
	
	std::cout <<"Length is now: " <<myFish->getLength();
	
	std::cout <<"\n\n";
	
	myFish->aboutfish();
	delete myFish; // memory leaks are bad
}
