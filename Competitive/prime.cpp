#include <iostream>
using namespace std;

int main() {

	int n,count=0;
	cin>>n;

	if(n==1) cout<<"No"<<endl;
	else
	{
	    for(int i=2;i<=n/2;i++)

	 {
	        if(n%i == 0)
	        count++;

	 }
	}

	if(count>0)
	cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;



	return 0;
}
