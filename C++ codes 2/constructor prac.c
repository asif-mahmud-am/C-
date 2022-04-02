#include<iostream>
using namespace std;

class Box
{
    int height;
    int width;
    int depth;
public:
    Box();
    Box(int a, int b, int c)
    {
        height = a;
        width = b;
        depth = c;
    }
    void show()
    {
        cout<<height*width*depth;
    }
};
int main()
{
    Box ob(2,3,4);
    return 0;
}
