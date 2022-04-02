#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int t,s;
    double F;
    cin>>t>>s;
    F = (double(t)*double(s)) / 12;
    cout<<fixed<<setprecision(3)<<F<<endl;

    return 0;
}
