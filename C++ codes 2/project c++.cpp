#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class account
{
    int acno;
    string name;
    int deposit;
public:
    void new_account();
    void src_account(int acno);
    void view_account();
    void money_withdraw(int money);
    void delete_account(int acno);
};

void account::new_account()
{
    cout<<"enter account number: "<<endl;
    cin>>acno;
    cout<<"enter your name: "<<endl;
    cin>>name;

}
void account::src_account()
{
    cout<<"enter account number: "<<endl;


}




int main()
{
    char ch;
    printf("\n\t\t\t\t(1)New Account\t\t\t\t\t\t\n");
    printf("\n\t\t\t\t(2)Search Account\t\t\t\t\t\t\n");
    printf("\n\t\t\t\t(3)View Account\t\t\t\t\t\t\n");
    printf("\n\t\t\t\t(4)Money Withdraw\t\t\t\t\t\t\n");
    printf("\n\t\t\t\t(5)Delete Account\t\t\t\t\t\t\n");
    printf("\n\t\t\t\t(6)Exit\t\t\t\t\t\t\n");

    cout<<"choose an option"<<endl;
    cin>>ch;
    switch(ch)
    {
  case '1':
    system("cls");
    new_account();
    break;
  case '2':
    system("cls");
    src_account();
    break;
  case '3':
    system("cls");
    view_account();
    break;
  case '4':
    system("cls");
    new_account();
    break;
  case '5':
    system("cls");
    money_withdraw();
    break;
  case '6':
    system("cls");
    return 0;
    break;


    }














    }
    return 0;
}
