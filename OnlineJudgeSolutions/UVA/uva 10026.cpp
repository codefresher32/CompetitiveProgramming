#include<bits/stdc++.h>
using namespace std;

bool com(const pair<double,int>&a,const pair<double,int>&b)
{
    return a.first > b.first;
}

int main()
{
    vector<pair<double,int>>v;
    int t,n;
    double a,b;
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            v.push_back(make_pair(b/a,i));
        }
        sort(v.begin(),v.end(),com);
        for(int i=0;i<n;i++){
            cout<<v[i].second;
            if(i!=n-1)
                cout<<" ";
        }
        cout<<endl;
        if(t)
            cout<<endl;
    }
    return 0;
}
