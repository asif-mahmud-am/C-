#include<iostream>
using namespace std;

template <class T1, class T2>
void add(T1 a, T2 b)
{
    cout<<a+b<<endl;
}
int main()
{
    add(1,2.4);
    return 0;
}
