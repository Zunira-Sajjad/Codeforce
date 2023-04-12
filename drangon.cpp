#include<iostream>
using namespace std;

int main()
{
    int s  , n ;
    cin >> n;
    int arr1[n] , arr2[n];
    for(int i=0 ; i<n ; i++)
    {
          cin >> arr1[i] >> arr2[i];
    }
    for(int i=0 ; i<n ; i++)
    {
          cout << arr1[i] << " " <<  arr2[i] << endl;
    }
    return 0;
}