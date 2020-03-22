#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],e[100]={0},o[100]={0},i,n,c1=0,c2=0,x=0,y=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
           e[x]=i;
           x++;
           c1++;
        }
        else
        {
            o[y]=i;
            y++;
            c2++;
        }
    }
    if(c1>c2)
    {
        cout<<o[0]+1<<endl;
        return 0;
    }
    else
    {
        cout<<e[0]+1<<endl;
        return 0;
    }
}
