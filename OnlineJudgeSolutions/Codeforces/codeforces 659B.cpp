#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<pair<int,string>>v[10005];
vector<pair<string,string>>p;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,id,po;
    string s,s1,s2;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
       cin>>s>>id>>po;
       v[id].push_back({po,s});
    }
    map<int,int>mp;
    int x,y;
    for(int i=1;i<=m;i++){
        sort(v[i].rbegin(),v[i].rend());
        s1=v[i][0].second;
        s2=v[i][1].second;
        for(int j=0;j<v[i].size();j++){
            mp[v[i][j].first]++;
            //cout<<v[i][j].first<<endl;
        }
        x=mp[v[i][0].first];
        y=mp[v[i][1].first];
        if(x==2||(x==1&&y==1)){
            p.push_back({s1,s2});
        }
        else{
            p.push_back({"?","?"});
        }
        mp.clear();
    }
    for(int i=0;i<m;i++){
        if(p[i].first=="?"){
            cout<<"?\n";
        }
        else{
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }
    return 0;
}

