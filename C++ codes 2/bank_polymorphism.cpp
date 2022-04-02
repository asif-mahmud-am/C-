#include<iostream>
using namespace std;
class Bank{
protected:
    int amount;
public:
    virtual double getRateOfInterest()=0;
};
class SCB:public Bank{
public:
    SCB(int a){
        amount=a;
    }
    double getRateOfInterest();
};
double SCB::getRateOfInterest(){
    return(amount*0.085);
}

class HSBC:public Bank{
public:
    HSBC(int a){
        amount=a;
    }
    double getRateOfInterest(){
        return(amount*0.09);
    }
};
int main()
{
    Bank *bnk;
    SCB scb(50000);
    HSBC hsbc(40000);
    bnk=&scb;
    cout<<"Interest is: "<<bnk->getRateOfInterest()<<endl;
    bnk=&hsbc;
    cout<<"Interest is: "<<bnk->getRateOfInterest();


}






