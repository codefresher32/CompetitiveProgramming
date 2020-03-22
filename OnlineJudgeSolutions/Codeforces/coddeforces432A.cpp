#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,k,c=0,i;
    cin>>n>>k;
    int a;
    for(i=0;i<n;i++)
    {
       cin>>a;
       if((a+k)<=5)
       {
           c++;
       }
    }
    cout<<c/3<<endl;
    return 0;
}
