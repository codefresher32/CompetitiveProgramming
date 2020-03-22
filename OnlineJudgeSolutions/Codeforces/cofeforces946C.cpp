#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    cin>>s;
    int len,i,j,ch;
    len=strlen(s);
    if(len<26)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    ch='a';

    for(i=0;i<len&&ch<='z';i++)
    {
        if(s[i]<=ch)
        {
            s[i]=ch;
            ch++;
        }
    }
    if(ch=='z'+1)
    {
        cout<<s<<endl;
        return 0;
    }
    cout<<"-1"<<endl;
    return 0;
}
