#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,d;
    double sum=0,p;

    cin>>n;
    d=n;
    while(n--)
    {
        cin>>p;
        sum+=p;
    }
    cout<<sum/d<<endl;
    return 0;
}
