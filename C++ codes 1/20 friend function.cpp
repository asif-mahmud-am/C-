///Friend function///
#include<iostream>

using namespace std;
class rectangle;
class cost
{
    int costRate;
public:
    void setValue(int a) {costRate = a;}
    int totalcost(rectangle A);

    ///int area(rectangle A);
};

class rectangle
{
   int height;
   int width;
public:
      void set(int a,int b) {height = a; width = b;}
      int area() {return height*width;}
      friend int cost::totalcost(rectangle A);

};
int cost::totalcost(rectangle A)
{
        return costRate*A.height*A.width;
}
/*int cost::area(rectangle A)
{
   return A.height*A.width;
 }*/

int main()
{

    rectangle obj;
    obj.set(5,6);
    cost c;
    c.setValue(100);
    cout<<obj.area()<<endl;
    cout<<c.totalcost(obj)<<endl;


    return 0;
}
