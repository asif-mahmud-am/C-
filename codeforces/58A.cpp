#include<iostream>
#include<string>
using namespace std;

int main () {

  int h =0, e=0,L=0,o=0, other=0;
  string s;
  cin>>s;
  int l = s.length();
  for(int i=0;i<l;i++)
  {
      if(s[i] == 'h')
      {
        h++;
      }
      else if(s[i] == 'e' && h>0)
      {
          e++;
      }
      else if(s[i] == 'l' && e>0)
      {
          L++;
      }
      else if(s[i] == 'o' && L>1)
      {
          o++;
      }
      else
      {
          other++;
      }
  }
  if(h>0 && e>0 && L>1 && o>0)
  {
      cout<<"YES";
  }
  else
    cout<<"NO";

  return 0;
}
