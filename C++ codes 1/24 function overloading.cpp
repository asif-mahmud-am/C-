#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}
float add(float a, float b)
{
    return a+b;
}
double add(double a, double b){
   return (a+b) * 2;
}

int main()
{


    cout<<add(5.2,6.2)<<" "<<endl;
}
