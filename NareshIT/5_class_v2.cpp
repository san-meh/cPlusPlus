#include<iostream>
#include <curses.h>

using namespace std;

class sample{
    private:
    int a;
    public:
    void geta(){
        cout << " Enter the value of a" << endl;
        cin >> a;
    }
    void puta(){
        cout <<"a=" << a << endl;
    }

    void big(sample s2){
        if( a > s2.a)
            cout <<  a << "is big" << endl;
        else if(a < s2.a)
            cout << s2.a <<"is big" << endl;
        else cout << "both value are equal" << endl;
    }
};

int main(){
    sample s1, s2;
    s1.geta();
    s2.geta();

    s1.puta();
    s2.puta();
    s1.big(s2);
    getch;

}