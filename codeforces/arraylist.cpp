#include <iostream>
#include <vector>

using namespace std;

int main(void) {
   vector<int> v1;
   for(int i=0;i<v1.size();i++)
   {
       v1.push_back(i);
   }
   vector<int> v2;

   for (int i = 0; i < v1.size(); ++i)
      v2.insert(v2.begin() + i, move(*(v1.begin() + i)));

   for (int i = 0; i < v2.size(); ++i)
      cout << v2[i] << endl;

   return 0;
}
