#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int m , n ,f[1000];
    for(int i=0 ; i<n ; i++)
    {
        cin >> f[i];
    }

    sort(f , f+m);
    int least = f[n-1]-f[0];
    for(int i=1 ; i<m-n ; i++)
    {
        if(f[i+n-1]-f[i] < least)
          least = f[i+n-1]-f[i];
    }
    cout << least << endl;
    return 0;
}