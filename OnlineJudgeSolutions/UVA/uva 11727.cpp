#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,i=1,j=1;
    cin>>n;
    int a[n];
    while(n--)
    {
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        cout<<"Case "<<j<<": "<<a[1]<<endl;
        j++;
    }
    return 0;
}
