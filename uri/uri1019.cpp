#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int hour = N/3600;
    int minute = (N%3600) / 60;
    int sec = ((N%3600) % 60);

    cout<<hour<<":"<<minute<<":"<<sec<<endl;

    return 0;
}
