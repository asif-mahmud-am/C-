#include<iostream>
using namespace std;

int main()
{
    int year;
    cin>>year;
    for(int i=year+1; ;i++)
    {
        int a = i%10;
        int b = (i/10)%10;
        int c = ((i/10)/10)%10;
        int d = (((i/10)/10)/10)%10;

        if((a!=b && a!=c && a!=d) && (b!=c && b!=d) && (c!=d))
        {
            cout<<i;
            break;
        }
    }







    return 0;
}
