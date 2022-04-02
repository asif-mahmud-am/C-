#include<iostream>
using namespace std;

class number
{
    int x,y; ///private
public:
    number() {x=0; y=0;}
    number(int a, int b) {x=a; y=b;}
    void get(int &a, int &b) {a=x; b=y;}
    void set(int a, int b) {x=a; y=b;}
    void print() {cout<<x<<" "<<y<<endl;}
    bool operator && (number ob);

};

bool number::operator && (number ob)
{
    return (x&&y) && (ob.x&&ob.y);
}



int main()
{

    number n1(3,0),n2(4,6),n3;
    if(n1&&n2)
    {
        cout<<"ok"<<endl;
    }
    else
    {
        cout<<"not ok"<<endl;
    }


    return 0;
}

