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
#define N 20005

int sq,id;
ll sum,ar[N],ans[N],temp[N],tree[N];

struct Query{
    int idx,l,r;
}qr[N];

bool cmp(Query A,Query B){
    int a,b;
    a=A.l/sq,b=B.l/sq;
    if(a==b) return A.r<B.r;
    return a<b;
}

void update(int idx,ll val){
    for(int i=idx;i<=id;i+=(i&-i)) tree[i]+=val;
    return ;
}

ll query(int idx){
    ll ret=0;
    for(int i=idx;i>0;i-=(i&-i)) ret+=tree[i];
    return ret;
}


void Add1(int x){
    sum+=query(ar[x]-1);
    update(ar[x],1);
    return ;
}

void Add2(int x){
    sum+=(query(id)-query(ar[x]));
    update(ar[x],1);
    return ;
}

void Remove1(int x){
    sum-=(query(id)-query(ar[x]));
    update(ar[x],-1);
    return ;
}

void Remove2(int x){
    sum-=query(ar[x]-1);
    update(ar[x],-1);
    return ;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,q,l,r;
    scanf("%d",&n);
    sq=sqrt(n);
    map<ll,ll>mp;
    for(int i=1;i<=n;i++){
        scanf("%lld",&ar[i]);
        temp[i]=ar[i];
    }
    sort(temp+1,temp+1+n);
    for(int i=1;i<=n;i++){
        if(!mp[temp[i]]) mp[temp[i]]=++id;
    }
    for(int i=1;i<=n;i++) ar[i]=mp[ar[i]];
    scanf("%d",&q);
    for(int i=1;i<=q;i++){
        scanf("%d %d",&l,&r);
        qr[i].l=l;
        qr[i].r=r;
        qr[i].idx=i;
    }
    sort(qr+1,qr+1+q,cmp);
//    cout<<endl;
//    for(int i=q;i>=1;i--) cout<<qr[i].l<<" "<<qr[i].r<<endl;
    l=n+1,r=n;
    for(int i=q;i>=1;i--){
        while(l>qr[i].l) Add1(--l);
        while(r>qr[i].r) Remove1(r--);
        while(l<qr[i].l) Remove2(l++);
        while(r<qr[i].r) Add2(++r);
        ans[qr[i].idx]=sum;
    }
    for(int i=1;i<=q;i++) printf("%lld\n",ans[i]);
    return 0;
}

/*
7
6 7 2 4 1 5 3
7
1 7
5 6
6 7
4 7
4 5
3 4
2 3
*/

