///subscript operator [] overloading///
#include<iostream>
using namespace std;

class number
{
    int x,arr[5]; ///private
public:
    number() {
        x=1;
       for(int i=1;i<=5;i++)
       arr[i-1] = i*x;
    }
    number(int a) {
        x=a;
       for(int i=1;i<=5;i++)
       arr[i-1] = i*x;
        }
    void get(int &a) {a=x;}
    void set(int a) {x=a;}
    void print() {cout<<x<<endl;}
    int operator [] (int a);

};
int number::operator [] (int a)
{
    return arr[a-1];
}

int main()
{

    number n1(3),n2(3),n3;
    cout<<n1[3]<<endl;

    return 0;
}



