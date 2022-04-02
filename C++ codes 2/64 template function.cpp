#include<iostream>
using namespace std;

template<class T>
T add(T a, T b)
{
    return a+b;
}

int main()
{
    int x=6, y = 5;
    cout<<add(x,y)<<endl;

    double num1 = 1.4, num2 = 5.4;
    cout<<add(num1,num2)<<endl;

    string s1 = "Asif " , s2 = "Mahmud";
    cout<<add(s1,s2)<<endl;


    return 0;
}
