#include<iostream>
using namespace std;

int main()
{
    int n , q  ,i , m , count;
    cin >> n;
    int arr[n];
    for(i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    while(q>=1)
    {
        count = 0;
        cin >> m;
        for(i = 0 ;i<n ; i++)
        {
            if(m >= arr[i])   count++;
            else count=count;
        }
        q--;
        cout << count << endl;
    }
    return 0;
}