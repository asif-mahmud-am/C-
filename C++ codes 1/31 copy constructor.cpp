#include<iostream>
using namespace std;

class abc
{
    int *p;
public:
    abc() {p = new int(0); cout<<"const..."<<*p<<endl;}
    ~abc() {cout<<"dist..."<<*p<<endl; delete p;}
    void set(int x) {*p = x;}
    void get() {cout<<*p<<endl;}
    abc(abc &);

};
abc::abc(abc &ob)
{
        p = new int(1);
        cout<<"const..."<<*p<<endl;
}




int main()
{
    abc a;
    a.get();
    abc b = a;
    a.get();
    b.get();
    b.set(3);
    a.get();
    b.get();





    return 0;
}
