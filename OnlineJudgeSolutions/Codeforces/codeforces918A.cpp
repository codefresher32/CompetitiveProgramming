#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a=1,b=1,m,n;
    map<int,bool>fib;
    cin>>n;
    while(a<=n)
    {
        fib[a]=1,fib[b]=1;
        m=a+b;
        a=b;
        b=m;
    }
    for(i=1;i<=n;i++)
    {
        if(fib[i])
        {
            cout<<"O";
        }
        else
        {
            cout<<"o";
        }
    }
    return 0;
}


