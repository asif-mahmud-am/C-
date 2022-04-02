#include<iostream>
using namespace std;
class shape
{
protected:
    double height;
    double width;
public:
    shape(double h,double w)
    {
        height=h;
        width=w;
    }
     virtual double area()=0;
};
class rectangle:public shape
{
public:
    rectangle(double h, double w):shape(h,w){}
    double area()
    {
        return (height*width);
    }
};
class triangle:public shape
{
public:
    triangle(double h,double w):shape(h,w){}
    double area()
    {
        return (.5*height*width);
    }
};
int main()
{
    shape*shape;
    rectangle d(4,5);
    triangle d1(4,5);
    shape=&d;
    cout<<shape->area()<<endl;
    shape=&d1;
    cout<<shape->area()<<endl;


    }
