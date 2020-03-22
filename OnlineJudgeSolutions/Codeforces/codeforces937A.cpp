#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,c=0,i,j;
    cin>>n;
    int a[n]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]&&a[i]!=0)
            {
                a[j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
