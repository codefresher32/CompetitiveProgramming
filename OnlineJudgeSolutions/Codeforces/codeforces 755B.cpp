#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,cn,cm;
    string s;
    map<string,int>mp;
    map<string,int>pm;
    vector<string>
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s;
        mp[s]++;
    }
    for(int i=1;i<=m;i++){
        cin>>s;
        pm[s]++;
    }

    return 0;
}


