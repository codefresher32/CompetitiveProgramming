#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[101],x;
    cin>>n>>m;
    int sum=0,mx=-1;
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
       mx=max(mx,a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=(mx-a[i]);
    }
    x=m;
    x-=sum;
    int kmin,kmax;
    if(x>0)
    {
        if(x%n)
            kmin=mx+x/n+1;
        else
            kmin=mx+x/n;
    }
    else
    {
        kmin=mx;
    }
    kmax=mx+m;
    cout<<kmin<<" "<<kmax<<endl;
    return 0;
}
