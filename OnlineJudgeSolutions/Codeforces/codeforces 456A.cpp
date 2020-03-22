#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    vector<pair<int,int>>p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        p.push_back(make_pair(a,b));
    }
    sort(p.begin(),p.end());

    for(int i=0;i<n;i++)
    {
        if(p[i].first<p[i+1].first&&p[i].second>p[i+1].second)
        {
            cout<<"Happy Alex\n";
            return 0;
        }
    }
    cout<<"Poor Alex\n";
    return 0;
}
