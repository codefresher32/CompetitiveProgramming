#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int n,m,d,x=0,a;
    ll sum=0;
    //cin>>n>>m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        //cin>>a;
        scanf("%d",&a);
        sum+=a;
        d=sum/m;
        //cout<<d-x<<" ";
        printf("%d ",d-x);
        x=d;
    }
    //cout<<endl;
    return 0;
}
