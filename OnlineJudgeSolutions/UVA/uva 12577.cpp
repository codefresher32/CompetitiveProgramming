#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[10];
    int i=0,j=0;

    while(cin>>s)
    {
        if(s[j]=='H')
        {
            i++;
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        }
        else if(s[j]=='U')
        {
            i++;
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        }
        else
        {
            return 0;
        }
    }
}
