#include<iostream>
#include<vector>

using namespace std;

int main()

{
    vector <char> prime(100000001,true);
    prime[0] = prime[1] = false;

    for(int i=2; i*i<=prime.size();i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=prime.size(); j=j+i)
            {
                prime[j] = false;
            }
        }
    }

    for(int i=1;i<=prime.size();i++)
     {
      if(prime[i]==true)
      {
        cout<<i<<" ";
      }

     }


     cout<<endl;

    return 0;
}
