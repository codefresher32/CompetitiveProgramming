#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t=1;
    while(cin>>n)
    {
        int a[10005];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        sort(a,a+n);
        int lo=0,hi=n-1,i,j,mn=INT_MAX;
        while(lo<hi)
        {
            if(a[lo]+a[hi]==m&&abs(a[lo]-a[hi])<mn)
            {
                i=a[lo];
                j=a[hi];
                mn=abs(a[lo]-a[hi]);
                lo++;
                hi--;
            }
            else if(a[lo]+a[hi]>m)
                hi--;
            else
                lo++;
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",i,j);
    }
}
