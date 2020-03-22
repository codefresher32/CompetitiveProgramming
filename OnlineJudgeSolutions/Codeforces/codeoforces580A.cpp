#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,i,j=0,c=1;
    cin>>n;
    int a[100001],b[100001]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=a[i+1])
        {
            c++;
        }
        else
        {
           b[j]=c;
           c=1;
           j++;
        }
    }
    sort(b,b+100001);
    cout<<b[100000]<<endl;
    return 0;
}
