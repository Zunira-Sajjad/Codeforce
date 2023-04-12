#include<iostream>
using namespace std;

int main()
{
     int a , b , no , sum;
     char c ;
     cin >> no ; 
     for(int i = 0 ; i < no ; i++)
     {
        cin >> a;
        cin >> c;
        cin >> b;
        cout << a+b << '\n';
     }
     return 0;
}