#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll s,sum;
    int n,a;
    while(cin>>n>>s)
    {
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int l=0,h=1,mn=INT_MAX;
        sum=v[l];
        while(l<h&&h<=n)
        {
            if(sum<s)
            {
                sum+=v[h];
                h++;
            }
            else if(sum>=s)
            {
                mn=min(mn,h-l);
                sum-=v[l];
                l++;
            }
        }
        if(mn==INT_MAX)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<mn<<endl;
    }
}
