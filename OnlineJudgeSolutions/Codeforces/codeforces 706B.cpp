#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100005]={0},q,m[100005],c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    int h,l,mid,t,x;
    for(int i=1;i<=q;i++)
        cin>>m[i];
    for(int i=1;i<=q;i++)
    {
        x=m[i];
        h=n;
        l=1;
        mid=t=-1;
        while(h>=l)
        {
            mid=(h+l)/2;
            if(x==a[mid])
            {
                t=mid;
                break;
            }
            else if(x>a[mid])
                l=mid+1;
            else
            {
                h=mid-1;
                t=mid;
            }
        }
        cout<<t<<endl;
    }
    return 0;
}
