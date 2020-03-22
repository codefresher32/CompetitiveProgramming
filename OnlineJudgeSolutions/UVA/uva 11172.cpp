#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void comp(long long a,long long b)
{
    if(a<b)
    {
        cout<<"<"<<endl;
        return ;
    }
    else if(a>b)
    {
        cout<<">"<<endl;
        return ;
    }
    else
    {
        cout<<"="<<endl;
        return ;
    }
}

int main()
{
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        comp(a,b);
    }
    return 0;
}
