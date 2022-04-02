#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,c=0;
    cin>>x;
    int arr[x];
    for(int i=0; i<x;i++)
    {
        int a,b;
        cin>>a>>b;
        c = abs(c-a) + b;
        arr[i] = c;
    }
    int largest = arr[0];
    for(int i=0; i<x;i++)
    {
        if(largest<arr[i])
        {
            largest = arr[i];
        }
    }
    cout<<largest;

    return 0;
}
