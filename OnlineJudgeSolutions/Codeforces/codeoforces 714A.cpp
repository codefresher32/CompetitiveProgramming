#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l1,l2,r1,r2,k,l,r,ans;
    cin>>l1>>r1>>l2>>r2>>k;
    l=max(l1,l2);
    r=min(r1,r2);
    if(l>r)
        cout<<0<<endl;
    else
        if(k>=l&&k<=r)
            cout<<r-l<<endl;
        else
            cout<<r-l+1<<endl;
    return 0;
}
