#include<iostream>
#include <curses.h>

using namespace std;

class stu;
class stu{
    int id;
    char name [20];

    public :
    void readStu(){
        cout << "Enter Student ID and NAME" << endl;
        cin >> id >> name ;
    }
    void showStu();
};

void stu::showStu(){
    cout <<"stu id is" << id << endl;
    cout << " stu name is :" << name << endl;
}

int main(){
    stu s;
    system("clear");
    s.readStu();
    s.showStu();
    getch;
    return 0;
}