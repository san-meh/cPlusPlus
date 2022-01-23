#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int integerInput;
    long longInput;
    char charInput;
    float floatInput;
    double doubleInput;
    cin>>integerInput >> longInput >> charInput >> floatInput >> doubleInput;
//    cout << integerInput << endl << longInput << endl << charInput << endl << floatInput << endl << doubleInput;
 //   printf("%d \n%ld \n%c \n%.3f \n%.9lf", integerInput, longInput, charInput, floatInput, doubleInput);
 std::cout << integerInput << endl;
 std::cout << longInput << endl;
 std::cout << charInput << endl;
 std::cout << std::setprecision(3) << std::fixed <<floatInput << endl;
 std::cout << std::setprecision(9) << std::fixed <<doubleInput;
    return 0;
}