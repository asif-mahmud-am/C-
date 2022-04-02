#include<iostream>
#include<string>
using namespace std;

int main()
{
    string p;
    cin>>p;
    size_t position1 = p.find("H");
    size_t position2 = p.find("Q");
    size_t position3 = p.find("9");

    if(position1 != -1 || position2 != -1 || position3 != -1)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
