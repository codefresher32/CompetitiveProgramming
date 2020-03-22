#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool c(const pair<int,int> &a, const pair<int,int> &b){
    return((a.first-a.second) > (b.first-b.second)) ;
}

int main()
{
    int n,m,a,b;
    ll s1=0,s2=0;
    vector<pair<int,int>>p;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        s1+=a;
        s2+=b;
        p.push_back(make_pair(a,b));
    }
    if(s2>m)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(s1<=m)
    {
        cout<<0<<endl;
        return 0;
    }
    int cnt=0;
    sort(p.begin(),p.end(),c);
    for(int i=0;i<n;i++)
    {
        cnt++;
        s1-=(p[i].first-p[i].second);
       if(s1<=m)
       {
           cout<<cnt<<endl;
           return 0;
       }
    }
}
