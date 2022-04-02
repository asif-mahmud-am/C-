///object in function///
#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int a,int b) {height = a; width = b;}
    int area() {return height*width;}
};
rectangle scan()
{
    int h,w;
    cin>>h>>w;
    rectangle ob;
    ob.set(h,w);
    return ob;
}
void print(rectangle abc)
{
    cout<<abc.area()<<endl;
}

int main()
{

    rectangle obj;
    obj = scan();
    print(obj);


    return 0;
}
