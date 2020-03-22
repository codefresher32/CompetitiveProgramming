#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    vector<pair<string,string>>v;
    vector<string>s;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>s1>>s2;
        v.push_back(make_pair(s1,s2));
    }
    for(int i=0;i<n;i++)
    {
        cin>>s1;
        s.push_back(s1);
    }
    sort(v.begin(),v.end());
    int l1,l2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i]==v[j].first)
            {
               l1=v[j].first.size();
               l2=v[j].second.size();
               if(l1>l2)
                    cout<<v[j].second<<" ";
               else
                cout<<v[j].first<<" ";
               break;
            }
        }
    }
    cout<<endl;
    return 0;
}
