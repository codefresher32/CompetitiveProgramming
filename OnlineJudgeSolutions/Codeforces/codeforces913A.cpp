#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long int n,m,d,x;
    cin>>n>>m;
    d=pow(2,n);
    x=m%d;
    cout<<x<<endl;
    return 0;
}
