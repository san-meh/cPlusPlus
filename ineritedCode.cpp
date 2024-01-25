class BadLengthException: public exception {
    private:
    int N;
    public:
    BadLengthException(int N){
        this->N = N;
    }
    int what(){
        return this->N;
    }
};
