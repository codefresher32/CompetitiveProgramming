#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003


int par_f[10005];
int ar[10005];
ll sum[10005];



int FindPar(int node)
{
    if(node==par_f[node]){
        return node;
    }
    return par_f[node]=FindPar(par_f[node]);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,q,u,v,a,b,x,y,T,m;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
            par_f[i]=i;
            sum[i]=0;
        }
        for(int i=1;i<=m;i++){
            scanf("%d %d",&u,&v);
            a=FindPar(u);
            b=FindPar(v);
            if(a!=b){
                par_f[b]=a;
            }
        }
        set<int>st;
        for(int i=0;i<n;i++){
            a=FindPar(i);
            sum[a]+=ar[i];
            st.insert(a);
        }
        bool f=0;
        for(int xx:st){
            if(sum[xx]!=0){
                f=1;
                break;
            }
        }
        if(!f){
            printf("POSSIBLE\n");
        }
        else{
            printf("IMPOSSIBLE\n");
        }
//        if(T){
//            printf("\n");
//        }

    }

    return 0;
}




