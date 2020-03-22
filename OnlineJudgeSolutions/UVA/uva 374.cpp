#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int bigmod(long long int b,long long int p,long long int m)
{
    long long int x;
    if(p==0)
    {
        return 1;
    }
    else if((p&1)==1)
    {
        return (bigmod(b,p-1,m)*b)%m;
    }
    else
    {
        x=bigmod(b,p/2,m);
        return (x*x)%m;
    }
}

int main()
{
    long long int b,p,m;
    while(cin>>b>>p>>m){
    cout<<bigmod(b,p,m)<<endl;
    }
    return 0;
}
