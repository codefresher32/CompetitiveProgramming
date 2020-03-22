#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,aa[10001],t,s=0,bb[10001],k;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>aa[i];
    }
    k=0;
    for(int i=0;i<n;i++)
    {
        t=0;
        for(int j=i+1;j<n;j++)
        {
            if(aa[i]==aa[j])
            {
                t=1;
                break;
            }
        }
        if(t==0)
        {
            bb[k]=i+1;
            s++;
            k++;
        }
    }
    if(s<m)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++)
        {
            cout<<bb[i]<<" ";
        }
    }
    return 0;
}
