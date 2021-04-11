//Constructor Overloading-> Allows to extent more task of constructor also called polymorphism.
//Every constructor should be declare in public area
//Default constructor: A constructor withou argument
//Parmeterized constructor; A constructor with parameter
//A constructor should be declare  in public area
//definning many constructor with different parameters is called constructor overloading

#include <stdio.h>
#include <curses.h>
#include <iostream>
using std::cout;

//using namespace std;

class rect{
    float l, b, h;

    public:

    //Default Constructor
    rect(){
        l = 5;
        b = 5;
        h = 5;
    }
    //parametrized constructor
    rect( float l, float b){
        (*this).l = l;
        (*this).b = b;
        h = 5; 
    }
    rect( float l, float b, float h){
        rect:rect(l, b); //calling constructor
        (*this).h = h;
    }

    void showArea(){
        cout << " area of circle " << l * b * h << l << std::ends << b << std::ends << h << std::endl;
    }
};

int main(){
    rect c1;
    rect c2(10, 20); //constructor overloading
    rect c3(10, 20, 30);
    c1.showArea();
    c2.showArea();
    c3.showArea();
    return 0;
}