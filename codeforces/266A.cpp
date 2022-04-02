#include<iostream>
using namespace std;

int main()
{
    int x, count = 0;
    cin>>x;
    char s[x];
    for(int i=0; i<x;i++)
    {
        cin>>s[i];

    }
    for(int i=0;i<x;i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
    }
    cout<<count;


    return 0;
}

