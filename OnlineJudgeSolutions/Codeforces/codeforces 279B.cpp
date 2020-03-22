#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,sum,c,mx,x,k;
    cin>>n>>t;
    int a[100005]={0};
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sum=c=mx=0;
    k=1;
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
        if(sum<=t)
        {
            c++;
        }
        else
        {
            mx=c>mx?c:mx;
            sum-=a[k];
            k++;
        }
    }
    mx=c>mx?c:mx;
    cout<<mx<<endl;
    return 0;
}
