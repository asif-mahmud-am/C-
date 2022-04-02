#include<iostream>
using namespace std;

class abc
{
    int n1,n2;
public:
    void setvalues(int n1, int n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }
    void print() {cout<<"n1= "<<n1<<" n2 = "<<n2<<endl;
    }
};

int main()
{
    abc ob;
    ob.setvalues(3,4);
    ob.print();
}
