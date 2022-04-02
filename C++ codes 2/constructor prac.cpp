#include<iostream>
using namespace std;

class Box
{
    int height;
    int width;
    int depth;
public:
    Box() {cout<<"hello"<<endl;}
    Box(int a, int b, int c)
    {
        height = a;
        width = b;
        depth = c;
    }
    int show()
    {
        cout<<height*width*depth;
    }
};
int main()
{
    Box ob1;
    Box ob(2,3,4);
    ob.show();
    return 0;
}
