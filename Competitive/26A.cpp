#include<iostream>
#include<vector>
using namespace std;

int sieve(int n)
{
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
          if(n%i == 0)
            count++;
      }

  }
  if(count == 2)
    return 1;
  else
    return 0;
}


int main()
{
    int n;
    int value = 0;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
    bool c = sieve(i);
    if(c == true)
        value++;
    }

    cout<<value;


  return 0;
}


