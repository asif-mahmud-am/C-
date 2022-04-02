#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int r, c, res;
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    res = (abs(r-2) + abs(c-2));
    cout<<res;

    return 0;
}
