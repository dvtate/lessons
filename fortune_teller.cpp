#include<iostream>


int main(){

        std::string name;

        short int age;

        std::cout <<"I'm a  fortune teller.\nUnfortionatly, I have no idea who you are.\n So what's your name? ";;
        getline(std::cin, name);

        std::cout <<"I'm afraid there's more than one " <<name <<".\nSo how old are you? ";
        std::cin >>age;


        if (age <= 0 || age > 200)
                std::cout <<"\nThere's no way you're " <<age <<"!";
        else
                std::cout <<"\nOk, I can assure you that in 10 rears, you will be "
                          <<age + 10 <<'.' <<std::endl;
}







