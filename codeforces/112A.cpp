// Example program

#include<iostream>
using namespace std;

int main()
{
    string s;
    int one=0, zero=0,res=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            one++;
            zero = 0;
        }
        if(s[i] =='0')
        {
            zero++;
            one = 0;
        }
        if(one ==7 || zero ==7)
          {
             res = 1;
             break;
          }


     }

    if(res == 1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

