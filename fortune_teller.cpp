#include<iostream>

using namespace std;


int main(){
	
	string name;

	char age;
	
	cout <<"I'm a  fortune teller.\nUnfortionatly, I have no idea who you are.\n So what's your name? ";;
	getline(cin, name);

	cout <<"I'm afraid there's more than one " <<name <<".\nSo how old are you?\n";
	cin >>age;


	if (age <= 0 || age > 200)
		cout <<"\nThere's no way you're " <<age <<"!";
	else
		cout <<"\nOk, I can assure you that in 10 rears, you will be " 
			 <<(age + 10) <<'.' <<std::endl;
}
