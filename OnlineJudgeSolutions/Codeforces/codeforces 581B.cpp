#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,v[100001]={0},a[100005]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int mx=-1;
    for(int i=n;i>0;i--)
    {
        a[i]=max(0,mx-v[i]+1);
        mx=max(mx,v[i]);
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
