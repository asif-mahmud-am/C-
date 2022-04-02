#include<iostream>
using namespace std;

template<class T1,class T2>
void swapv(T1 &a, T2 &b)
{
    T2 temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x;
    double y;
    cin>>x>>y;
    swapv(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
