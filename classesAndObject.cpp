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



