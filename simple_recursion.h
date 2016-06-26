#include <iostream>

void countDown(unsigned int number){
        std::cout <<number <<std::endl;
        if (number == 0)
                return;
        else
                return countDown(number - 1);

}


int main(){

        countDown(20);

}
