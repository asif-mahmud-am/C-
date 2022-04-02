#include<iostream>
#include<string>
using namespace std;

int main()
{
    int count =0,count1=0;
    string s,s1;
    cin>>s;
    s1 = s;
    int l = s.length();
    for(int i=0; i<l;i++)
    {
        if(s[0]>=90 && s[0]<=122)
        {
            s1[0] = s[0] - 32;
        }
        if(s[i]>=65 && s[i]<=90)
        {
          s1[i]= s[i] + 32;
          count++;
        }
    }
    if(count)

    return 0;
}
