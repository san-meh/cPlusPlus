#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, q, i, j, size, which, index;
    cin >> n >> q;
    vector<vector<int>> vect(n);
    
    for (i = 0; i < n; i++){
        cin >> size;
        vect[i].resize(size);
        for(j = 0; j < size; j++) {
            cin >> vect[i][j];
        }
    }
    //print the data

    for( i = 0; i < q; i++){
        cin >> which >> index;
        cout << vect[which][index] << endl;
    }
    return 0;
}
