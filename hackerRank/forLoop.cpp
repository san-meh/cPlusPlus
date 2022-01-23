#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int inputFirstNumber;
    int inputSecondNumber;
    string represent[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> inputFirstNumber;
    cin >> inputSecondNumber;

    for(int i = inputFirstNumber; i <= inputSecondNumber; i++) {
        if ( i > 9) {
            if (i % 2 == 0){
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        } else{
            cout << represent[i] << endl;
        }

    }
    return 0;
}