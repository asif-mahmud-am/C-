#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l = s.length();
    for(int i =0; i<l; i++)
    {
       if(i==0)
       {
           s[i] = toupper(s[i]);
       }
    }
    for(int i=0; i<l;i++)
    {
        cout<<s[i];
    }

    return 0;
}
