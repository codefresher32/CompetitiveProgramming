#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    long long x;
    vector<long long>a,b,c;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>x;
        b.push_back(x);
    }
    long long mx;
    for(int i=0;i<n;i++)
    {
        mx=-1000000000000000009;
        for(int j=0;j<m;j++)
        {
            mx=max(mx,(a[i]*b[j]));
        }
        c.push_back(mx);
    }
    sort(c.rbegin(),c.rend());
    cout<<c[1]<<endl;
    return 0;
}
