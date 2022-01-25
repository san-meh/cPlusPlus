#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

void update(int *a,int *b) {
    // Complete this function  
    int temp;
    *a = *a + *b;
    *b = abs(*a - 2*(*b));
}

int main() {
    int a, b;
    int* pa = &a, 
    int* pb = &b;
    
    std::cout << pa << ends << pb;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}