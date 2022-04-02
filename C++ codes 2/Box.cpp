#include<iostream>
using namespace std;

class Box
{
    int height;
    int width;
    int depth;
public:
    Box();
    Box(int a,int b,int c){height = a; width = b; depth=c;}
    void show() {cout<<height<<" "<<width<<" "<<depth<<endl;}
};
int main()
{
    Box ob(1,2,3);
    ob.show();


    return 0;
}
