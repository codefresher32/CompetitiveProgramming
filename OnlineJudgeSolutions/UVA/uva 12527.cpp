#include<bits/stdc++.h>
using namespace std;

int counting(int n)
{
    int r=0,d,x,c=0;
    vector<int>v;
    d=n;
    while(d!=0)
    {
        r=d%10;
        d/=10;
        v.push_back(r);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]==v[i+1])
            return c;
    }
    c=1;
    return c;
}

int main()
{
    int n,m,x,i;
    while(cin>>n>>m)
    {
        x=0;
        for(int i=n;i<=m;i++)
        {
            x+=counting(i);
        }
        cout<<x<<endl;
    }
    return 0;
}
