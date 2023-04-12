#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    int count=0;
    char s[101];
    cin>>s;
	int l  = strlen(s);
	sort(s,s+l);
    for(int i=0; i<l; i++)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!\n";
    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }
    return 0;
}