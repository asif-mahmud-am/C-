#include<iostream>
#include<vector>
using namespace std;
class Clients;
class Company{
public:
    string name;
    string address;
    vector<Clients>clients;
    Company(string name,string address){
        this->name=name;
        this->address=address;
    }
};
class Clients{
public:

    string name;
    string swf_type;
    string address;
    Company *cmp;
    Clients(string name,string swf,string address){
        this->name=name;
        this->swf_type=swf;
        this->address=address;
    }
};



int main()
{
    Clients uttra("Uttra Bank ltd.","Interest calculation swf","Dhaka");
    Clients brack("Brack Bank ltd.","Revenue calculation swf","Chittagong");
    Company leads("LEADS","Uttra, Dhaka");
    uttra.cmp=&leads;
    brack.cmp=&leads;

    leads.clients.push_back(uttra);
    leads.clients.push_back(brack);

    cout<<"Client's name: "<<uttra.name<<endl;
    cout<<"Client's swf type: "<<uttra.swf_type<<endl;
    cout<<"Client's address: "<<uttra.address<<endl<<endl;
    cout<<"Company name: "<<uttra.cmp->name<<endl;
    cout<<"Company address: "<<uttra.cmp->address<<endl;
}




