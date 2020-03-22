#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pi pair<char,int>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,q,l,r,id;
    scanf("%d",&t);
    int ar[255]={0};
    while(t--){
        vector<int>v;
        vector<pii>vc;
        id=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d %d",&l,&r);
            vc.pb({l,r});
            v.pb(l),v.pb(r);
        }
        memset(ar,0,sizeof ar);
        sort(v.begin(),v.end());
        unordered_map<int,int>mp;
        for(int i=0;i<2*n;i++){
            if(!mp[v[i]]) mp[v[i]]=++id;
        }
        for(int i=0;i<n;i++){
            ar[mp[vc[i].F]]++,ar[mp[vc[i].S]+1]--;
        }
        int ans=0;
        for(int i=1;i<=id+5;i++){
            ar[i]+=ar[i-1];
            ans=max(ans,ar[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}

