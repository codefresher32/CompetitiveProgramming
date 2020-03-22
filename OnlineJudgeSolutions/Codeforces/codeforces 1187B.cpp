#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,l,c[30];
    string s,o,p;
    vector<int>G[30];
    cin>>n>>s>>m;
    for(int i=0;i<n;i++){
        G[s[i]-'a'+1].pb(i+1);
    }
    while(m--){
        cin>>o;
        l=o.size();
        memset(c,0,sizeof(c));
        for(int i=0;i<l;i++){
            c[o[i]-'a'+1]++;
        }
        int mx=0;
        for(int i=1;i<=26;i++){
            if(c[i]){
                mx=max(mx,G[i][c[i]-1]);
            }
        }
        cout<<mx<<endl;
    }

    return 0;
}

