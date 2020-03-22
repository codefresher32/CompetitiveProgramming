#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,m,x;
    cin>>n>>m;

    if(n>m)
    {
        x=m;
    }
    else
    {
        x=n;
    }

    if(x%2==0)
    {
        cout<<"Malvika"<<endl;
        return 0;
    }
    cout<<"Akshat"<<endl;
    return 0;
}
