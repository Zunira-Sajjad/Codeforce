#include<iostream>
using namespace std;

int main()
{
     int a , b , c , count=0 , no;
    
     cin >> no ; 
     for(int i = 0 ; i < no ; i++)
     {
        cin >> a;
        cin >> b;
        cin >> c;
        if(a==1 && b==1 && c==1)    count++;
        if(a==0 && b==1 && c==1)    count++;
        if(a==1 && b==1 && c==0)    count++;
        if(a==1 && b==0 && c==1)    count++;
     }
     cout << '\n' << count;
     return 0;
}