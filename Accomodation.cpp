#include<iostream>
using namespace std;

int main()
{
   int no , p , q , count=0;
   cin >> no;
   for(int i=0 ; i< no ; i++)
   {
       cin >> p;
       cin >> q;
       if(p <= (q-2))  count++;
   }
   cout << count << '\n';
   return 0;

}