#include<iostream>
using namespace std;

int main()
{
     int  n , k , a , count=0;
     cin >> n; 
     cin >> k;
     int arr[n];
     for(int i = 0 ; i < n ; i++)
     {
        cin >> arr[i];
     }
    for(int i = 0 ; i < n ; i++)
     {
        if(arr[i] >= arr[k-1] && arr[i]!=0)  count++;
     }

     cout << '\n' << count;
     return 0;
}