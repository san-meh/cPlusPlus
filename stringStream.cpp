#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parseInt(string str) {
    vector<int> input;
    stringstream ss(str);
    int store;
    char ch;
    while(ss >> store){     
        input.push_back(store);
        ss >> ch;
    }
    return input;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInt(str);
    for(int i= 0; i < integers.size(); i++){
        cout << integers[i] << "\n";
    }
}
