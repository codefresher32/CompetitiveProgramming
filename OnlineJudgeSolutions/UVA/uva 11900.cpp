#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,p,q,a[33]={0},x,y=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>p>>q;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            a[i]=a[i-1]+x;
        }
        int pos=0;
        for(int i=1;i<n;i++)
        {
            if(q>=a[i])
                pos=i;
        }
        pos=p<pos?p:pos;
        printf("Case %d: %d\n",++y,pos);
    }
    return 0;
}
