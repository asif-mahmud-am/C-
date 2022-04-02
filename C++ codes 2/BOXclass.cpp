#include<iostream>
using namespace std;
class BOX

{
private:
    double height;
    double width;
    double depth;
public:
    BOX()
    {
        height=3;
        width=4;
        depth=5;
    }
    BOX(double h,double w,double d)
    {
        height=h;
        width=w;
        depth=d;
    }
    BOX(BOX&);
    void show()
    {
        cout<<height<<" "<<width<<" "<<depth<<endl;
    }

};
BOX::BOX(BOX& obj){
    height=obj.height;
    width=obj.width;
    depth=obj.depth;
}
int main()
{
    cout<<"parametarized constructor"<<endl;

    BOX ob(4,5,6);
     ob.show();
     cout<<"Default constructor"<<endl;
    BOX ob1;
    ob1.show();
    cout<<"Copy constructor"<<endl;
    BOX obj(ob);
    obj.show();



    return 0;

}
