#include<iostream>
using namespace std;

int main()
{
    int x , y ,z , n , sum1=0 , sum2= 0, sum3 = 0;
    cin >> n;
    while(n>=1)
    {
        cin >> x >> y >> z;
        sum1 +=x;
        sum2 +=y;
        sum3+=z;
        n--;
    }
    if(sum1==0 && sum2==0 && sum3==0){   cout << "YES\n";}
    else cout << "NO\n";
    return 0;
}