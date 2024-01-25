#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int query, i, marks, input;
    string name;
    cin >> query;
    map<string, int> studentMarks;
    for(i = 0; i < query; i++){
        cin >> input;
        if(input == 1){
            cin >> name >> marks;
            auto it = studentMarks.find(name);
            if (it ==  studentMarks.end()){
                studentMarks.insert(make_pair( name, marks));
            } else {
                it->second += marks;
            }
        } else if (input == 2){
            cin >> name;
            studentMarks.erase(name);
        } else if (input == 3){
            cin >> name;
            auto itr = studentMarks.find(name);
            if (itr == studentMarks.end()){
                cout << 0 << endl;
            } else {
                cout << itr->second << endl;
            }
        }
    }
    return 0;
}
