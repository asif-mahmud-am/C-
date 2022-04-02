///variable scope///
#include<iostream>

using namespace std;
int global; ///ei variable sob jaygay use kora jabe..because its global///
int main()
{
   {
       int k = 5;
       cout<<k<<endl;
   } ///ekhane k variable brace er moddhei kaj korbe sudhu.. Next abar k use kora jabe///

        float k = 5.6; ///k variable abar use kora jacche karon brace er moddhe
                        ///use korar karone k variable ta brace er moddhei destroy hoye jabe///
        cout<<k<<endl;




    return 0;
}
