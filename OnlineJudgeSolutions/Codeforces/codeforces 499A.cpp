#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,a,b,s=0;
    vector<pair<int,int>>v;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    b=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
            a=1;
        else
            a=v[i-1].second+1;

        s+=v[i].second-v[i].first+1;
        b=v[i].first-a;
        s+=(b%x);
    }
    cout<<s<<endl;
    return 0;
}
