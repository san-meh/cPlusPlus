#include<iostream>
#include<curses.h>

using namespace std;

void swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    cout << &a << &b;

}
int main (){
    int a =10, b =20;
    swap( a, b );
    cout << endl << "a =" << a << "b=" << b;
    getch;
    return 0;
}