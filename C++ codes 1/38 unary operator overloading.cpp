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
    number operator ++ ();
    number operator ++ (int a);

};

number number::operator++() ///pre increment(++n1)
{

    x++; y++;
    number tmp;
    tmp.x = x;
    tmp.y = y;
    return tmp;
}
number number::operator++(int a) ///post increment(n1++)
{
    number tmp;
    tmp.x = x;
    tmp.y = y;
    x++; y++;
    return tmp;
}


int main()
{

    number n1(3,0),n2(4,6),n3;
    cout<<"N1 before "; n1.print();
    n3 = ++n1;
    cout<<"N1 after "; n1.print();
    n3.print();




    return 0;
}

