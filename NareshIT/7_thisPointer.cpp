#include<iostream>
#include <curses.h>

using namespace std;

class test{
    int a, b;
    public:
    void show(int a, int b){
        cout << "object addr. is" << this << endl;
        cout << "data memeber a addr is" << this->a << endl;
        cout << "data memeber b addr is" << this->b << endl;
        //this->a = x;
        (*this).a = a;
        this->b = b;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main(){
    test t;
    t.show(10, 20);
    getch;
    return 0;
}