#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    vector<pair<int,int>>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    int x=INT_MIN,cnt=1;
    for(int i=0;i<n-1;i++)
    {
        if(x<(v[i].first-v[i].second))
        {
            cnt++;
            x=v[i].first;
        }
        else if((v[i].first+v[i].second)<v[i+1].first)
        {
            cnt++;
            x=v[i].first+v[i].second;
        }
        else
            x=v[i].first;
    }
    cout<<cnt<<endl;
    return 0;
}
