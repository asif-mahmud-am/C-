#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count =0;
    int l = s.length();
    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[i] == s[j])
            {
                s[j] = '0';
            }
        }
    }
    for(int i=0;i<l;i++)
    {
        if(s[i] != '0')
        {
            count++;
        }
    }
    if(count%2 ==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
        cout<<"IGNORE HIM!";




    return 0;
}
