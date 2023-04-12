#include<iostream>
using namespace std;

int main()
{
    int a , b , c , sum1=0 , sum2=0 , sum3=0 , sum4=0 , sum5 = 0 , sum6 = 0;
    cin >> a >> b >> c;
    sum1 = a+(b*c);
    sum2 = a*(b+c);
    sum3 = a*b*c;
    sum4 = (a+b)*c;
    sum5 = a+b+c;
    sum6 = (a*b)+c;
    if(sum1 >= sum2 && sum1 >= sum3 && sum1>=sum4 && sum1>=sum5 && sum1>=sum6)  cout << sum1;
    else if(sum2 >= sum1 && sum2 >= sum3 && sum2>=sum4 && sum2>=sum5 && sum2 >= sum6)  cout << sum2;
    else if(sum3 >= sum1 && sum3 >= sum2 && sum3>=sum4 && sum3 >= sum5 && sum3 >= sum6)  cout << sum3;
    else if(sum4 >= sum1 && sum4 >= sum2 && sum4>=sum3 && sum4>=sum5 && sum4 >=sum6)  cout << sum4;
    else if(sum5 >= sum1 && sum5 >= sum2 && sum5>=sum3 && sum5>=sum4 && sum5 >=sum6)  cout << sum5;
    else cout << sum6;
    return 0;
}