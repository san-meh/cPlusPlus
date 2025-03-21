#include <iostream>
using namespace std;

class Student{
    private:
    int scores;
    public:
    void input(){
        int subject1Input, subject2Input, subject3Input, subject4Input, subject5Input;
        cin >> subject1Input >> subject2Input >> subject3Input >> subject4Input >> subject5Input;
        scores = subject1Input + subject2Input + subject3Input + subject4Input + subject5Input;
    }
    int calculateTotalScore(){
        return scores;
    }
};

int main() {
    int n;
    cin >> n;
    Student *s = new Student[n];
    for(int i; i < n; i++ ){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    cout << count;

}


