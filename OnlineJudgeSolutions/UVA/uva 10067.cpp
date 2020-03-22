#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int f1[]={1,0,0,0,-1,0,0,0};
int f2[]={0,1,0,0,0,-1,0,0};
int f3[]={0,0,1,0,0,0,-1,0};
int f4[]={0,0,0,1,0,0,0,-1};
int c[12][12][12][12];
bool vis[12][12][12][12];
int p1,p2,p3,p4;

struct node
{
    int a,b,c,d;
    node(int x,int y,int z,int zz)
    {
        a=x,b=y,c=z,d=zz;
    }
};

void valid()
{
    if(p1<0){
        p1=9;
    }
    else if(p1>9){
        p1=0;
    }
    if(p2<0){
        p2=9;
    }
    else if(p2>9){
        p2=0;
    }
    if(p3<0){
        p3=9;
    }
    else if(p3>9){
        p3=0;
    }
    if(p4<0){
        p4=9;
    }
    else if(p4>9){
        p4=0;
    }
    return ;

}


void bfs(int s1,int s2,int s3,int s4)
{
    queue<node>q;
    vis[s1][s2][s3][s4]=1;
    c[s1][s2][s3][s4]=0;
    q.push(node(s1,s2,s3,s4));
    while(!q.empty()){
        node tp=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            p1=tp.a+f1[i];
            p2=tp.b+f2[i];
            p3=tp.c+f3[i];
            p4=tp.d+f4[i];
            valid();
            if(!vis[p1][p2][p3][p4]){
                vis[p1][p2][p3][p4]=1;
                c[p1][p2][p3][p4]=c[tp.a][tp.b][tp.c][tp.d]+1;
                q.push(node(p1,p2,p3,p4));
            }
        }
    }
    return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,s1,s2,s3,s4,d1,d2,d3,d4,q1,q2,q3,q4,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&d1,&d2,&d3,&d4,&n);
        while(n--){
            scanf("%d%d%d%d",&q1,&q2,&q3,&q4);
            vis[q1][q2][q3][q4]=1;
        }
        if(vis[d1][d2][d3][d4]&&d1!=s1){
            printf("-1\n");
        }
        else{
            bfs(s1,s2,s3,s4);
            if(!vis[d1][d2][d3][d4]){
                printf("-1\n");
            }
            else{
                printf("%d\n",c[d1][d2][d3][d4]);
            }
        }
        memset(vis,0,sizeof(vis));
        memset(c,0,sizeof(c));
    }
    return 0;
}

