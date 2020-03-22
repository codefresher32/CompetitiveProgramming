#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,j;
    vector<pair<int,int>>a;
    vector<pair<int,int>>b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k>>j;
        a.push_back(make_pair(k,j));
    }
    cin>>m;
    for(int i=0;i<m;i++){
       cin>>k>>j;
        b.push_back(make_pair(k,j));
    }
    int x1,x2,y1,y2,x;
    x1=x2=0;
    y1=y2=INT_MAX;
     for(int i=0;i<n;i++)
    {
        x1=max(x1,a[i].first);
        y1=min(y1,a[i].second);
    }
    for(int i=0;i<m;i++)
    {
         x2=max(x2,b[i].first);
        y2=min(y2,b[i].second);
    }
    x=max(max(x2-y1,x1-y2),0);
    cout<<x<<endl;
    return 0;
}
