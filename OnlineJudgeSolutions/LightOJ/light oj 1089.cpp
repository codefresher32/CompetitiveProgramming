#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 10000019



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,q,l,r,id,tc=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        vector<pii>vc;
        deque<int>dq;
        map<int,int>mp;
        int ar[200010]={0};
        for(int i=1;i<=n;i++){
            scanf("%d %d\n",&l,&r);
            vc.pb({l,r});
            dq.pb(l),dq.pb(r);
        }
        sort(dq.begin(),dq.end());
        id=1;
        int mx=0;
        for(int v:dq){
            if(!mp[v]){
                mp[v]=id,id+=2;
            }
            mx=max(mx,v);
        }
        mp[mx+1]=id;
        for(pii v:vc){
            auto it1=mp.upper_bound(v.F);
            auto it2=mp.upper_bound(v.S);
            it1--,it2--;
            ar[it1->S]++,ar[it2->S+1]--;
        }
        for(int i=1;i<=id+5;i++){
            ar[i]+=ar[i-1];
        }
        int ans;
        printf("Case %d:\n",++tc);
        while(q--){
            scanf("%d",&l);
            auto it=mp.upper_bound(l);
            it--;
            id=(it->F!=l)?it->S+1:it->S;
            printf("%d\n",ar[id]);
        }
    }
    return 0;
}
