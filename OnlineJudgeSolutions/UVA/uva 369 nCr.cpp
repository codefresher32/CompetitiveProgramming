#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long m[101][101];
long long nCr(int n,int r)
{
    if(r==1)
        return n;
    if(n==r)
        return 1;
    if(m[n][r]!=0)
        return m[n][r];
    m[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
    return m[n][r];
}
int main()
{
    int n,r;
    while(cin>>n>>r)
    {
        if(n==0&&r==0)
            return 0;
        printf("%d things taken %d at a time is %lld exactly.\n",n,r,nCr(n,r));
    }
    return 0;
}
