#include<bits/stdc++.h>
using namespace std;
vector<int>a;
vector<string>b;
vector<pair<int,string>>v;

int main()
{
    int t,x,n;
    string s,o;
    cin>>t;
    getchar();
    while(t--)
    {
        getchar();
        getline(cin,s);
        stringstream ss(s);
        while(ss>>x)
            a.push_back(x);
        getline(cin,s);
        stringstream sin(s);
        while(sin>>o)
            b.push_back(o);
        n=a.size();
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(a[i],b[i]));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            cout<<v[i].second<<endl;
        }
        a.clear();
        b.clear();
        v.clear();
        if(t)
            cout<<"\n";
    }
    return 0;
}
