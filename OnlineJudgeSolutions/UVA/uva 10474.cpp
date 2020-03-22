#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,a[10005],b[10005],p=0;
    while(cin>>n>>q)
    {
        if(n==0&&q==0)
            return 0;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int j=1;j<=q;j++)
            cin>>b[j];
        sort(a+1,a+n+1);
        int lo,hi,mid,ans;
        printf("CASE# %d:\n",++p);
        for(int i=1;i<=q;i++)
        {
            lo=1,hi=n,ans=0;
            while(lo<=hi)
            {
                mid=(lo+hi)/2;
                if(a[mid]==b[i])
                {
                    ans=mid;
                    hi=mid-1;
                }
                else if(a[mid]<b[i])
                {
                    lo=mid+1;
                }
                else
                {
                    hi=mid-1;
                }
            }
            if(ans)
                printf("%d found at %d\n",b[i],ans);
            else
                printf("%d not found\n",b[i]);
        }
    }
}
