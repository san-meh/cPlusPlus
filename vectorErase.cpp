#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n, i, input, eraseIndex, vectorSize, beginRange, endRange;
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> input;
        v.push_back(input);
    } 
 //   cout << "Enter erase Index" << endl;
    cin >> eraseIndex;

    v.erase(v.begin() + (eraseIndex - 1));

 //   cout << "Enter the range in vector" << endl;
    cin >> beginRange;
    cin >> endRange;
    v.erase(v.begin() + (beginRange - 1), v.begin() + (endRange - 1));

    //print vector
    vectorSize = v.size();
    cout << vectorSize << endl;
    for (i = 0; i < vectorSize; i++){
        cout << v[i] << " ";
    }

    return 0;
}
