#include<iostream>
using namespace std;
class Account
{
protected:
    string account_number;
    int balance;
    public:
    Account(string a,int b)
    {
        account_number=a;
        balance=b;
    }
public:
    void show()
    {
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

};
int main()
{
    Account acc[]={Account("0023485738",50000),Account("00234857",70000),
    Account("00234857334",60000),Account("0023485738",80000),Account("0023485738",40000),};
    for(int i=0;i<5;i++){
        acc[i].show();
    }
}




