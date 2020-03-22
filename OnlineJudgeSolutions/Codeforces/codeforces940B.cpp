#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long int n,k,a,b,c=0;
    cin>>n>>k>>a>>b;
    if(k==1)
    {
        cout<<a*(n-1)<<endl;
    }
    n-=1;
    c+=a;
    while(1)
    {
        if(n%k!=0)
        {
            n-=1;
            c+=a;
        }
        else
        {
            n/=k;
            c+=b;
        }
        if(n==1)
        {
            cout<<c<<endl;
            return 0;
        }
    }
    return 0;
}
