#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l = s.length();
    int m=0;
    char arr[(l/2)+1];
    for(int i=0; i<l; i=i+2)
    {
       arr[m++] = s[i];

    }

    sort(arr,arr+m);
    for(int i=0;i<m;i++)
    {
        if(i==0)
        {
            cout<<arr[i];
        }
        else
        {
            cout<<"+"<<arr[i];
        }
    }




    return 0;
}
