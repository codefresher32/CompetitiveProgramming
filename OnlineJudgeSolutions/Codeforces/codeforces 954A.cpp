#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,l;
    cin>>n;
    char s[101];
    scanf("%s",s);
    l=n;
    for(i=0;i<n;i++)
    {
        if(s[i]=='R'&&s[i+1]=='U'||s[i]=='U'&&s[i+1]=='R')
        {
            l--;
            i++;
        }
    }
    cout<<l<<endl;
    return 0;
}
