#include<iostream>
using namespace std;

int main()
{
    int t , n , i=1 , div;
    bool flag = true;
    cin >> t;
    while(t>=1)
    {
        cin >> n;
 again:       div = n/i;
        if(div%2!=0 && div>1) 
        {
            cout <<"YES\n";
            flag = false;
           
        } 
        else
        {
            i++;
            goto again;
        }
     t--;
    }
    if(flag == true)   cout << "NO\n";
}
