#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n,c=0,i,j,t1,t2;
    cin>>s>>n;
    int a[n*2];
    for(i=0;i<n*2;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        if(s>a[0])
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    for(i=0;i<n*2;i+=2)
    {
        for(j=i+2;j<n*2;j+=2)
        {
             if(a[i]>a[j])
        {
            t1=a[i];
            a[i]=a[j];
            a[j]=t1;
            t2=a[i+1];
            a[i+1]=a[j+1];
            a[j+1]=t2;
        }
        }
    }
    for(i=0;i<n*2;i+=2)
    {
       if(s>a[i])
       {
           s+=a[i+1];
           c++;
       }
    }

    if(c==n)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
