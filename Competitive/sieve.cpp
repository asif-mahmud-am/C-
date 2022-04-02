#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <char> is_prime(n+1, true);
    int count = 0;

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
    if (is_prime[i]) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
  for(int i=1;i<=is_prime.size();i++)
  {
      if(is_prime[i]==true){
          cout<<i<<endl;
      }

  }
}
