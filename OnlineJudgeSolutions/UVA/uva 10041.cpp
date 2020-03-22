#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t,n,a[505];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans,mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ans=0;
            for(int j=0;j<n;j++)
            {
                ans+=abs(a[i]-a[j]);
            }
            mn=min(mn,ans);
        }
        cout<<mn<<endl;
    }
    return 0;
}
