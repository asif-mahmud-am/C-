///new and delete
#include<iostream>
using namespace std;
int main()
{
    int *ptr;

    ptr = new int[5];
    ptr[0] = 4;
    ptr[1] = 5;
    cout<<ptr[0]<<endl;
    cout<<*ptr<<endl;
    cout<<ptr[1]<<endl;
    cout<<*(ptr+1)<<endl;
    delete [] ptr;


    return 0;
}
