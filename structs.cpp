

class Person{
    protected:
    string name;
    int age;
    
    public:
    virtual void getdata(){

    }
    virtual void putdata(){

    }

};

class Professor : public Person{
    private:
    int publications;

    public:
    static int id;
    int cur_id;
    Professor() {
        cur_id = ++id;
    }
    void getdata(){
        cin >> name >> age >> publications;
    }

    void putdata(){
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};
int Professor::id = 0;

class Student : public Person{
    public:
    int marks[6];


    static int id;
    int cur_id;
    Student(){
        cur_id = ++id;
    }
    void getdata(){
        cin >> name >> age;
        for (int i = 0; i < 6; i++){
            cin >> marks[i];
        }
    }

    void putdata(){
        int sum = 0;
        for (int i = 0; i < 6; i++){
            sum = sum + marks[i];
        }
        cout << name << " " << age << " " << sum << " "  << cur_id  << endl;
    }

};
int Student::id = 0;