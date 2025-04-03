#include <iostream>
int main() {
    int N,i=0;
    std::cin>>N;
    int *A = new int[N];
 //   while(std::cin>>A[i++]); // I don not know why this line is not working in code but working in hackerank
  //  while(std::cout<<A[--N]<<' ' && N);
    for(i=0; i < N; i++){
        std::cin >> A[i];
    }
    // for(i=N-1; i >= 0; i--){
    //     std::cout << A[i] << ' ';
    // }
    while(std::cout<<A[--N]<<' ' && N);
    delete[] A;
    return 0;
}