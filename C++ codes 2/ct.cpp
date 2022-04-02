#include<iostream>
using namespace std;

template<class T>
T swapv(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    double x,y;
    //double y;
    cin>>x>>y;
    swapv(x,y);

    return 0;
}
