#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}
int add(int x,int y)
{
    return x+y;
}
int main()
{
    cout<<add(2,3)<<endl;
    return 0;
}
