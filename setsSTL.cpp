#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int query, i, y, x;
    set<int>s;
    cin >> query;
    for(i = 0; i < query; i++){
        cin >> y;
        cin >> x;
        if( y == 1){
            s.insert(x);
        } else if ( y == 2){
            s.erase(x);
        } else if ( y == 3){
            auto itr = s.find(x);
            if (itr == s.end()){
                cout << "No" << endl;
            } else cout << "Yes" << endl;
        }
    }

    return 0;
}


