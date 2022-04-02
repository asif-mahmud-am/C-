#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{

    int c=0, n=0;
    string s;
    cin>>s;
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            c++;
        }
        else
            n++;
    }
    if(c>n)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s;
    }
    else if(c<n)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }
    else
    {
       transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }





    return 0;
}
