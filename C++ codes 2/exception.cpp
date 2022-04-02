#include<iostream>
using namespace std;

void divide(double a, double b)
{
    try{
        if(b==0) throw 0;
    else
    {
        cout<<"result= "<<a/b<<endl;
    }
    }
    catch(int e)
    {
        cout<<"cant divide something by zero"<<endl;
    }
}
int main()
{
    double a,b;
    do
    {
        cout<<"enter two numbers "<<endl;
        cin>>a>>b;
        divide(a,b);
    }
    while(a);
    return 0;
}
