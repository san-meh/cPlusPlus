#include <iostream>

using namespace std;

int main() {

    int n;
    string represent[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::cout << "Enter a Number" << endl;
    std::cin >> n;

    if(n > 9) {
        std::cout << represent[0];
    }
    else {
        std::cout << represent[n];
    }

    return 0;
}