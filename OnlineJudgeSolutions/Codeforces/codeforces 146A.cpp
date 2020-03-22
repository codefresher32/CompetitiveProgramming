#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,r,s1,s2;
    vector<int>v;
    cin>>n>>m;
    while(m>0)
    {
        r=m%10;
        m/=10;
        if(r!=4||r!=7)
        {
            cout<<"No\n";
            return 0;
        }
        v.push_back(r);
    }
    s1=s2=0;
        for(int i=0;i<n;i++)
        {
            if(i<n/2)
            {
                s1+=v[i];
            }
            else
            {
                s2+=v[i];
            }
        }
    if(s1==s2)
    {
        cout<<"Yes\n";
        return 0;
    }
    cout<<"No\n";
    return 0;
}
