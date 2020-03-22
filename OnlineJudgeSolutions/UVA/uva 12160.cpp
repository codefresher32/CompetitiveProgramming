#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int c[12][12][12][12];
bool vis[12][12][12][12];
int p[5],d[5],q[105][5],n;

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
    int ca=0;
    for(int i=4;i>=1;i--){
        if(p[i]>9){
            p[i]-=10;
            p[i-1]++;
        }
    }
   return ;
}


void bfs(int s[5])
{
    queue<node>qq;
    vis[s[1]][s[2]][s[3]][s[4]]=1;
    c[s[1]][s[2]][s[3]][s[4]]=0;
    qq.push(node(s[1],s[2],s[3],s[4]));
    while(!qq.empty()){
        node tp=qq.front();
        qq.pop();
        for(int i=1;i<=n;i++){
            p[1]=tp.a+q[i][1];
            p[2]=tp.b+q[i][2];
            p[3]=tp.c+q[i][3];
            p[4]=tp.d+q[i][4];
            valid();
            if(!vis[p[1]][p[2]][p[3]][p[4]]){
                vis[p[1]][p[2]][p[3]][p[4]]=1;
                c[p[1]][p[2]][p[3]][p[4]]=c[tp.a][tp.b][tp.c][tp.d]+1;
                qq.push(node(p[1],p[2],p[3],p[4]));
                if(p[1]==d[1]&&p[2]==d[2]&&p[3]==d[3]&&p[4]==d[4]){
                    return ;
                }
            }
        }
    }
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,s[5],id=0;
    string s1,s2;
    while(scanf("%s %s %d",s1.c_str(),s2.c_str(),&n)!=EOF){
        if(s1.size()==0&&s2.size()==0&&n==0){
            return 0;
        }
        for(int i=0;i<4;i++){
            s[i+1]=s1[i]-'0';
            d[i+1]=s2[i]-'0';
        }
        int mn;
        for(int j=1;j<=n;j++){
            scanf("%s",s1.c_str());
            for(int i=0;i<4;i++){
                q[j][i+1]=s1[i]-'0';
            }
        }
        memset(vis,0,sizeof(vis));
        memset(c,-1,sizeof(c));
        bfs(s);
        printf("Case %d: ",++id);
        mn=c[d[1]][d[2]][d[3]][d[4]];
        if(mn==-1){
            printf("Permanently Locked\n");
        }
        else{
            printf("%d\n",mn);
        }
    }
    return 0;
}
