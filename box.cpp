


#include<bits/stdc++.h>

using namespace std;

class Box{
    private:
    int m_length{ 0 };
    int m_width{ 0 };
    int m_hieght{ 0 };
    public:
    // default constructor
    Box(){}

    Box(int l, int w, int h)
        : m_length(l), m_width(w), m_hieght(h)
    {}
    
    long CalculateVolume() { return m_length*m_width*m_hieght; }

    //copy constructor
    Box(const Box& other)
        :m_length(other.m_length), m_width(other.m_width), m_hieght(other.m_hieght){
    }

    int getLength(){
        return m_length;
    }
    int getBreadth(){
        return m_width;
    }
    int getHeight(){
        return m_hieght;
    }

    //Operator Overloading
    friend bool operator < ( Box&A,Box& B){
        if( (A.m_length < B.m_length) || ((A.m_width < B.m_width) && (A.m_length == B.m_length)) || ((A.m_hieght < B.m_hieght) && (A.m_length == B.m_length) && (A.m_width == B.m_width)) ){
            return true;
        }else{
            return false;
        }
    };

    friend ostream& operator <<(ostream& output,const Box& B){
        output << B.m_length << " " << B.m_width << " " << B.m_hieght;
        return output; 
    }
};





