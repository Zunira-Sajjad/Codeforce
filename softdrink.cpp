#include<iostream>
using namespace std;
int min(int a , int b , int c)
{
    if(a < b && a < c)    return a;
    else if(b < a && b < c)   return b;
    else return c;
}
int main()
{
    int n , k, l, c ,d ,p , nl ,np , mul , mul1 , mul2;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    mul = (k*l)/nl;
    mul1 = c*d;
    mul2 = p/np;
    int res = min(mul , mul1 , mul2);
    cout << res/n;
    return 0;


}