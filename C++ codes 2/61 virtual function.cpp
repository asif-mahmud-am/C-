#include<iostream>
using namespace std;

class sound{
public:
    virtual void print() {cout<<"Your sound"<<endl;}
};

class dog:public sound{
public:
    void print() {cout<<"Ghew"<<endl;}
};

class cat:public sound{
public:
    void print() {cout<<"Meaw"<<endl;}
};


int main()
{
    sound sob;
    dog dob;
    cat cob;

    sound *ptr;
    ptr = &dob;
    ptr->print();

    ptr = &cob;
    ptr->print();


    return 0;
}
