#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int size, i, temp, numOfQuery, value;
    cin >> size;
    vector<int> vec;
    for( i = 0; i < size; i++){
        cin >> temp;
        vec.push_back(temp);
    }

    cin >> numOfQuery;
    vector<int>::iterator ir;
    for ( i = 0; i < numOfQuery; i++){
        cin >> value;
        ir = lower_bound(vec.begin(), vec.end(), value);
        if (*ir == value){
            cout << "Yes";
        } else{
            cout << "No";
        }
        cout << " " << ir - vec.begin() + 1 << endl;
    }

    return 0;
}
