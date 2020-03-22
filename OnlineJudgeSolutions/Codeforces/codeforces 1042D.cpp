#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,a[200005]={0},cnt=0;
    scanf("%lld%lld",&n,&t);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]<t)
            cnt++;
    }
    long long sum=0;
    int l=0;r=1;
    while(l<r)
    {
        sum+=a[l]+a[r];
        if(sum>=t)
        {
            sum-=a[l];
            l++;
            r++;
        }
        else if()
    }
    cout<<cnt<<endl;
    return 0;
}
