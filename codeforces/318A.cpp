#include<iostream>
using namespace std;

int main()
{
    int x,k,even,odd, m=0;
    cin>>x>>k;
    int arr[x];
    if(x%2 ==0)
    {
    even = (x/2) - 1;
    for(int i=1;i<=x;i++)
    {
        if(i%2 !=0)
        {
            arr[m] = i;
            //cout<<arr[m]<<" ";
            m++;
        }
        else
          arr[m + even] = i;

    }
    }
    else
    {
        odd = (x/2);
        for(int i=1;i<=x;i++)
    {
        if(i%2 !=0)
        {
            arr[m] = i;
            m++;
        }
        else
          arr[m + odd] = i;
    }

    }
    cout<<arr[k-1];

    return 0;
}
