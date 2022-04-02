#include<iostream>
using namespace std;

int main()
{
    int k,n,w,total=0;
    cin>>k>>w>>n;

    for(int i=1;i<=n;i++)
    {
        total = total + (k*i);
    }
    total = total - w;
    if(total<=0)
    {
        cout<<0;
    }
    else
        cout<<total;
    return 0;
}
