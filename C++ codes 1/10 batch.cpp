#include<iostream>
using namespace std;

class A
{
public:
    A() {cout<<"constructor of A"<<endl;}
    ~A() {cout<<"destructor of A"<<endl;}
};

class B:public A
{
   public:
    B() {cout<<"constructor of B"<<endl;}
    ~B() {cout<<"destructor of B"<<endl;}
};
class C:public B
{
   public:
    C() {cout<<"constructor of C"<<endl;}
    ~C() {cout<<"destructor of C"<<endl;}
};
int main()
{
    C c;
    return 0;
}
