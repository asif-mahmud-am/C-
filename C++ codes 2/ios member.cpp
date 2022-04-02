#include<iostream>
using namespace std;

int main()
{
    cout.setf(ios::scientific);
    cout<<130.4566<<endl;

    //cout.setf(ios::showpoint);
    cout.setf(ios::uppercase);
    cout<<130.4566<<endl;
    cout.setf(ios::showpos);
    cout<<130.4566<<endl;


    return 0;
}
