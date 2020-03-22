#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,x;
    long long sum=0,s=0;
    vector<int>v;
    cin>>n;
    x=n;
    while(n--)
    {
        cin>>a;
        sum+=a;
    }
    while(x--)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.rbegin(),v.rend());
    s=v[0]+v[1];
    if(sum<=s)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
