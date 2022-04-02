#include<iostream>
using namespace std;

class abc
{
public:
    abc() {static int a=0;
              a++;
              cout<<a<<endl;
    }
};
int main()
{
    int a;
    abc ob1;
    abc ob2;


}
