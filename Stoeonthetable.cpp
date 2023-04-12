#include<iostream>
using namespace std;

int main()
{
    int no , count=0;
    cin >> no;
    char a[no];

    for(int i=0 ; i< no; i++)
    {
        cin >> a[i];
    }
    for(int i=0 ; a[i]!='\0'; i++)
    {
       if(a[i]==a[i+1]) count++;
    }
     cout << count << '\n';
     return 0;
}