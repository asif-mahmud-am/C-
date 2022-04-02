#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

    vector<int>  A{11,2,3,14};
    cout<< A[1]<<endl;

    sort(A.begin(),A.end());
    bool present = binary_search(A.begin(),A.end(),3);

    return 0;
}
