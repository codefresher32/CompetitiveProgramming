#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=0;
    cin>>n;
    char s[n];
    cin>>s;
    if(n<26)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0;i<strlen(s);i++)
    {
        s[i]=tolower(s[i]);
    }
    sort(s,s+n);
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            c++;
        }
    }
    if(c==26)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
