#include<iostream>

using namespace std;

int main()
{
    int a , b , count=0;
    cin >> a;
   // while( a >=1 )
    //{
    cin >> b;
    string s;
    getline(cin, s);
	int l  =  s.length();
    for(int i=0; i<l; i++)
    {
        if(l>2)
        {
              if(s[i] != s[i+1] and s[i+1]==s[i+2] and l>2)
                 count++;}
        else   count=0;
    }
    if(count!=0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    a--;
  //  }
    return 0;
}