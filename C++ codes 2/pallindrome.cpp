#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    int length,i,j;
    cin>>str;
    length = strlen(str);

    for(i=0;i<length;i++)
    {
        if(str[i] == str[length-1])
        {
            length--;
        }
        else if(str[i] != str[length-1])
        {
            cout<<"Not pallindrome"<<endl;
            return 0;
        }
    }
    cout<<"Pallindrome"<<endl;



    return 0;
}
