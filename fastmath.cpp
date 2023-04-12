#include<iostream>
using namespace std;

int main()
{
    string str , str1;
    cin >> str ;
    cin >> str1;
    for(int i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]==str1[i]) cout << '0';
        else cout << '1';
    }
    return 0;
}