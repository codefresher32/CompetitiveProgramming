#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum,i=1;
    cin>>n>>m;
    sum=n;
    while(sum>=(m*i))
    {
        sum++;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
