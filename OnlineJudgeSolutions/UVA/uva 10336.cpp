#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

char s[1005][1005],ch;
bool vis[1005][1005];
map<char,int>mp;
vector<pair<char,int>>p;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int n,m;

bool com(pair<char,int>A,pair<char,int>B)
{
    if(A.second==B.second){
        return A.first<B.first;
    }
    return A.second>B.second;
}

bool valid(int x,int y)
{
    if(s[x][y]==ch&&!vis[x][y]){
        return true;
    }
    return false;
}

void dfs(int x,int y)
{
    int nx,ny;
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(valid(nx,ny)){
            dfs(nx,ny);
        }
    }
    return ;
}

void clr()
{
    mp.clear();
    p.clear();
    memset(vis,0,sizeof(vis));
    return ;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0,tx,ty,n,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>s[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(!vis[i][j]){
                    mp[s[i][j]]++;
                    ch=s[i][j];
                    dfs(i,j);
                }
            }
        }
        vector<pair<char,int>>p;
        printf("World #%d\n",++id);
        for(auto oo:mp){
            p.push_back({oo.first,oo.second});
        }
        sort(p.begin(),p.end(),com);
        for(auto xx:p){
            cout<<xx.first<<": "<<xx.second<<endl;
        }
        clr();
    }
    return 0;
}
