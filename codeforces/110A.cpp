#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int four = 0, seven = 0;
    cin>>s;
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i] == '4')
        {
            four++;
        }

        if(s[i] == '7')
        {
            seven++;
        }
    }
    int total = four+seven;
    if(four>=1 || seven>=1)
    {
        if(total == 4 || total == 7)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
}
