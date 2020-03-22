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
    int t,n,u,v,m,a[50005];
    cin>>t;
    while(t--){
        vector<int>G[50005];
        set<int,greater<int>>st;
        unordered_map<int,int>mp;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            st.insert(a[i]);
            mp[a[i]]=i;
        }
        for(int i=1;i<n;i++){
            cin>>u>>v;
            G[u].pb(v);
            G[v].pb(u);
        }
        for(int i=1;i<=n;i++){
            st.erase(a[i]);
            for(int v:G[i]){
                st.erase(a[v]);
            }
            auto it=st.begin();
            cout<<mp[*it]<<" ";
            st.insert(a[i]);
            for(int v:G[i]){
                st.insert(a[v]);
            }
        }
        cout<<endl;

    }

    return 0;
}



