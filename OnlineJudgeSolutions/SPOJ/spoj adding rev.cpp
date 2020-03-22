#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int rev(int n)
{
    int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
int main()
{
    int a,b,n,sum,c;
    cin>>n;
    while(n--)
    {
        sum=0;
        cin>>a>>b;
        a=rev(a);
        b=rev(b);
        sum=rev(a+b);
        cout<<sum<<endl;
    }
    return 0;
}
