#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a;
    vector<int>v;
    cin>>n>>m;
    v.push_back(1);
    for(int i=0;i<m;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    long long int ans=0;
    for(int i=0;i<m;i++)
    {
        if(v[i]<=v[i+1])
            ans+=v[i+1]-v[i];
        else
            ans+=n-v[i]+v[i+1];
    }
    cout<<ans<<endl;
    return 0;
}
