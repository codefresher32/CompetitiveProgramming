#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,co,dco,dso;
    cin>>n>>m>>a>>b;
    if(n%m!=0)
    {
        dco=(n/m)*b+(n%m)*a;
        dso=(n/m)*b+b;
        dco=dco<=dso?dco:dso;
        co=n*a;
    }
    else
    {
        dco=(n/m)*b;
        co=n*a;
    }
    co=dco<co?dco:co;
    cout<<co<<endl;
    return 0;
}
