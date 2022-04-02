#include<iostream>
using namespace std;

int main()
{
    cout.setf(ios::scientific);
    cout<<130.4566<<endl;
    cout.unsetf(ios::scientific);
    cout<<130.4566<<endl;

    cout.unsetf(ios::basefield);
    cout.setf(ios::hex);
    cout<<100<<endl;

    cout.setf(ios::showbase);
    cout<<100<<endl;

    ios::fmtflags flag;
    flag = cout.




    return 0;
}

