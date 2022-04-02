#include<iostream>
using namespace std;

int main()
{
    int x,div,res;
    cin>>x;

    div = x/5;

    if(x%5 == 0)
    {
        res = div;
    }
    else
        res = div+1;
    cout<<res;



    return 0;
}
