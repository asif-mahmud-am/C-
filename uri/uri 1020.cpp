#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int year = N/365;
    int mon = ((N%365) / 30);
    int day = ((N%365) % 30);
    cout<<year<<" ano(s)"<<endl;
    cout<<mon<<" mes(es)"<<endl;
    cout<<day<<" dia(s)"<<endl;


    return 0;
}
