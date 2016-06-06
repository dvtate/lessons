#include<iostream>


// data-structures are similar to classes, but they came first
// (C has struct's but not classes). C++ added a bunch of 
// "features" to the struct that I don't like.
struct book_t {

        char* title;
        char* author;

        // unions occupy the same memory, so writing the first value 
        // and then the next will corrupt the first.
        union {
                float USD;
                int CNY;
        } price;

};

// there are also struct templates :)
template <class T>
struct vector3_t {
        T x, y, z;
};


// namespaces help to organize functions, variables,
// classes, types, etc. The compiler just appends
// the namespace to the variable name to make it
// distinguishable.
namespace XDDDDDDD {
        typedef long long BigAssNumber;
        typedef double Number;
}

int main(){

        book_t novel;
        novel.price.CNY = 500;
        novel.price.USD = 10.52f;

        std::cout <<"The novel can be found at: " <<&novel
                  <<"\nThe novel cost $" <<novel.price.USD
                  <<"\nnovel.price.CNY has been corrupted: "
                  <<novel.price.CNY;



        XDDDDDDD::Number myNumber = 553.5;


        vector3_t <double> coords;
        coords.x = 120;
        coords.y = myNumber;
        coords.z = 122;

        std::cout <<"\n\n\ncoordinate(" <<coords.x <<", " <<coords.y <<", "
                  <<coords.z <<")\n";


}


