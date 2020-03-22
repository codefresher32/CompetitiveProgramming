#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<int,int>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000000
#define pai acos(-1)
#define mx 1000005
#define N 100005

int tree[4*N];
deque<int>dq[N];
map<int,int>mp;

void update(int node,int b,int e,int idx,int val){
    if(b>idx||e<idx) return ;
    if(b==e&&b==idx){
        tree[node]=val;
        return ;
    }
    int mid=(b+e)/2;
    update(2*node,b,mid,idx,val);
    update(2*node+1,mid+1,e,idx,val);
    tree[node]=__gcd(tree[2*node],tree[2*node+1]);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int ans,n,q,ar,x,id=0,idx=0;
    char ch;
    cin>>q;
    n=q;
    while(q--){
        cin>>ch>>ar;
        if(!mp[ar]) mp[ar]=++id;
        if(ch=='+'){
            idx++;
            dq[mp[ar]].pb(idx);
            update(1,1,n,idx,ar);
        }
        else{
            x=dq[mp[ar]].front();
            dq[mp[ar]].pop_front();
            update(1,1,n,x,0);
        }
        ans=(tree[1]==0)?1:tree[1];
        cout<<ans<<"\n";
    }
    return 0;
}


