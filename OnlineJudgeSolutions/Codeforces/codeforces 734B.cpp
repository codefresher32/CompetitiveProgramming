#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k2,k3,k5,k6,x,y;
    long long sum=0;
    cin>>k2>>k3>>k5>>k6;
    x=min(min(k2,k6),k5);
    k2-=x;
    y=min(k2,k3);
    sum=x*256+y*32;
    cout<<sum<<endl;
    return 0;
}
