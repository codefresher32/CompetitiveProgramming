#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ans(ll n)
{
    ll sum=0,x;
    while(n)
    {
        x=n%10;
        n/=10;
        sum+=(x*(x+1))/2+n*45;
    }
    return sum;
}

int main()
{
    ll p,q,sum;
    while(cin>>p>>q)
    {
        if(p<0&&q<0)
        {
            return 0;
        }
        sum=ans(q)-ans(p-1);
        cout<<sum<<endl;
    }
    return 0;
}

