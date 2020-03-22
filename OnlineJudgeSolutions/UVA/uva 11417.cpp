#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(!b)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    int n,i,j,sum;
    while(cin>>n)
    {
        sum=0;
        if(n==0)
        {
            return 0;
        }
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                sum+=gcd(i,j);
            }
        }
        cout<<sum<<endl;
    }
}


