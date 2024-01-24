#include<iostream>
#include<string>

using namespace std;

int main() {
    string firstString, secondString;
    cin >> firstString;
    cin >> secondString;
    int firstStringSize = firstString.size();
    int secondStringSize = secondString.size();
    string concatinateString = firstString + secondString;
    char firstStringFirstChar = firstString[0];
    char secondStringSecondChar = secondString[0];
    firstString.erase(0,1).insert(0, 1, secondStringSecondChar);
    secondString.erase(0,1).insert(0,1, firstStringFirstChar);
    cout << firstStringSize << " " << secondStringSize << endl;
    cout << concatinateString << endl;
    cout << firstString << " " << secondString;
}
