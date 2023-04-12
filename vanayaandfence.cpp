#include<iostream>
using namespace std;

int main()
{
    int m , n , count=0 , a;   // m no of friends   and n = height 
    cin >> m;
    cin >> n;
    for(int i=0 ; i<m ; i++)
    {
       cin >> a;
       if(a > n)    count=count+2;
       else count++;
    }
    
    cout << count ;
    return 0;
}