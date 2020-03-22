#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i,n;
    char s[30];

    while((cin>>s))
    {

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=65&&s[i]<=67)
        {
            s[i]='2';
        }
        else if(s[i]>=68&&s[i]<=70)
        {
            s[i]='3';
        }
        else if(s[i]>=71&&s[i]<=73)
        {
            s[i]='4';
        }
        else if(s[i]>=74&&s[i]<=76)
        {
            s[i]='5';
        }
        else if(s[i]>=77&&s[i]<=79)
        {
            s[i]='6';
        }
        else if(s[i]>=80&&s[i]<=83)
        {
            s[i]='7';
        }
        else if(s[i]>=84&&s[i]<=86)
        {
            s[i]='8';
        }
        else if(s[i]>=87&&s[i]<=90)
        {
            s[i]='9';
        }
    }
    cout<<s<<endl;
}
return 0;
}
