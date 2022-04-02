///assign object//
#include<iostream>

using namespace std;

class rectangle
{
    int height;
    int width;
public:
    int area();
    void set(int h, int w);
};

inline int rectangle::area()
{
    return height*width;
}
void rectangle::set(int h, int w)
{
    height = h;
    width = w;
}
int main()
{

    rectangle obj,obj1;
    obj.set(2,3);
    obj1.set(5,6);

    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<obj1.area()<<endl;
    obj1 = obj;

    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<obj1.area()<<endl;



    return 0;
}

