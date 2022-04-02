#include<iostream>
using namespace std;

int main()
{
    double N;
    cin>>N;

    double hun = (N/100);
    double fif = ( N % 100) / 50;
    double twn = ((N % 100) % 50) / 20;
    double ten = (((N % 100) % 50) % 20) / 10;
    double fiv = ((((N % 100) % 50) % 20) % 10) / 5;
    double two = (((((N % 100) % 50) % 20) % 10) % 5) / 2;
    double one = ((((((N % 100) % 50) % 20) % 10) % 5) % 2) /1;
    double fity = ((((((((N % 100) % 50) % 20) % 10) % 5) % 2) % 1) * 100) / 50;
    double twf = (((((((((N % 100) % 50) % 20) % 10) % 5) % 2) % 1) *100) % 50) / .25;
    double tn = ((((((((((N % 100) % 50) % 20) % 10) % 5) % 2) % 1) *100) % 50) % .25) / 10;
    double fi = (((((((((((N % 100) % 50) % 20) % 10) % 5) % 2) % 1) *100) % 50) % .25) % 10)/ 5;
    double on= ((((((((((((N % 100) % 50) % 20) % 10) % 5) % 2) % 1) *100) % 50) % .25) % 10) % 5) /1;

    cout<<"NOTAS:"<<endl;
    cout<<hun<<" nota(s) de R$ 100.00"<<endl;
    cout<<fif<<" nota(s) de R$ 50.00"<<endl;
    cout<<twn<<" nota(s) de R$ 20.00"<<endl;
    cout<<ten<<" nota(s) de R$ 10.00"<<endl;
    cout<<fiv<<" nota(s) de R$ 5.00"<<endl;
    cout<<two<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;
    cout<<one<<" moeda(s) de R$ 1.00"<<endl;
    cout<<fitf<<" moeda(s) de R$ 0.50"<<endl;
    cout<<twf<<" moeda(s) de R$ 0.25"<<endl;
    cout<<tn<<" moeda(s) de R$ 0.10"<<endl;
    cout<<fi<<" moeda(s) de R$ 0.05"<<endl;
    cout<<on<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}
