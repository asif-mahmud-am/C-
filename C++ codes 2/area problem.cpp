#include<iostream>
#define pi 3.1416
using namespace std;

class area
{
protected:
    int height;
    int width;
    int radius;
public:
    void setvalu(int a, int b) {height = a; width = b;}
    void setvalue(int r) {radius = r;}


};
class rectangle:public area
{
public:

    int area(int x, int y) { setvalu(x,y);}
    int print() {cout<<"area of rectangle = "<<height*width<<endl;}
};
class triangle:public area
{
public:
    int area(int x, int y) { setvalu(x,y);}
    void print() {cout<<"area of triangle = "<<height*width / 2<<endl;}
};
class circle:public area{
public:
    int area(int a) {setvalue(a);}
    void print() {cout<<"area of circle= "<<pi*radius*radius<<endl;}

};

int main()
{
    int m,n,o,p,q;
    rectangle ob1;
    cout<<"enter the height and width of rectangle: "<<endl;
    cin>>m>>n;
    ob1.area(m,n);
    ob1.print();

    triangle ob2;
    cout<<"enter the height and width of triangle: "<<endl;
    cin>>o>>p;
    ob2.area(o,p);
    ob2.print();

    circle ob3;
    cout<<"enter the radius of circle: "<<endl;
    cin>>q;
    ob3.area(q);
    ob3.print();
}
