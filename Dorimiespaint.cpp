#include<iostream>
using namespace std;

int main()
{
   int testcases , size  , i ,j;
   cin >> testcases;
   while(testcases == 1)
   {
       cin >> size;
       int arr[size];
       for(i=0 ; i<size ; i++)
       {
        cin >> arr[i];
       }
       
       for(i=0 ; i<size ; i++)
       {
        for( j=i+1 ; j<size ; j++)
          {
            if(arr[i] < arr[j] && (arr[i]+arr[j]) >= size){
                 cout << arr[i] << ' ' << arr[j] << '\n';
            }
          }
       }
       testcases--;
   }
    return 0;
}