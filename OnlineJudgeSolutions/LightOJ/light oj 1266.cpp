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
#define N 1005

int tree[N][N];
bool vis[N][N];

void update(int id,int idx,int val){
    for(int i=id;i<N;i+=(i&-i)){
        for(int j=idx;j<N;j+=(j&-j)) tree[i][j]+=val;
    }
    return ;
}

int query(int id,int idx){
    int ret=0;
    for(int i=id;i>0;i-=(i&-i)){
        for(int j=idx;j>0;j-=(j&-j)) ret+=tree[i][j];
    }
    return ret;
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,ty,q,x1,x2,y1,y2,x,y,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&q);
        printf("Case %d:\n",++id);
        while(q--){
            scanf("%d",&ty);
            if(!ty){
                scanf("%d %d",&x,&y);
                x++,y++;
                if(!vis[x][y]){
                    vis[x][y]=1;
                    update(x,y,1);
                }
            }
            else{
                scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
                int sum;
                x1++,y1++,x2++,y2++;
                sum=query(x2,y2)-query(x1-1,y2)-query(x2,y1-1)+query(x1-1,y1-1);
                printf("%d\n",sum);
            }
        }
        memset(tree,0,sizeof tree);
        memset(vis,0,sizeof vis);
    }
    return 0;
}


