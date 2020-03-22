#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[200002]={0},b[200002]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];

    sort(a,a+n);
    int lo,hi,mid,tr;
    for(int i=0;i<m;i++)
    {
        lo=0;
        hi=n-1;
        tr=0;
        if(b[i]<a[0])
        {
            b[i]=0;
            continue;
        }
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            if(b[i]<a[mid]){
                hi=mid-1;
            }
            else if(b[i]>=a[mid])
            {
                tr=mid;
                lo=mid+1;
            }
        }
        b[i]=tr+1;
    }
    for(int i=0;i<m;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}
