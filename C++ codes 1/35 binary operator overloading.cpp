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
    number operator + (number ob);

};

number number::operator + (number ob)
{
    number tmp;
    tmp.x = x + ob.x;
    tmp.y = y + ob.y;
    return tmp;
}



int main()
{

    number n1(3,4),n2(4,6),n3;
    n3 = n1 + n2;
    n3.print();



    return 0;
}
