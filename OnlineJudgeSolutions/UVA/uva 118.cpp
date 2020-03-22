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

int n,m,sx,sy;
bool f;
string s;
char cx;
int fx[]={0,1,0,-1};
int fy[]={1,0,-1,0};
bool vis[55][55];

bool valid(int x,int y)
{
    if(x>=0&&x<=n&&y>=0&&y<=m){
        return true;
    }
    return false;
}

void dfs(int x,int y,char ch)
{
    int id,nx,ny;
    if(ch=='N') id=0;
    else if(ch=='E') id=1;
    else if(ch=='S') id=2;
    else id=3;
    for(int i=0;i<s.size();i++){
        if(s[i]=='F'){
            x=x+fx[id],y=y+fy[id];
            if(!valid(x,y)){
                x-=fx[id],y-=fy[id];
                if(!vis[x][y]){
                    vis[x][y]=1;
                    f=1;
                    break;
                }
            }
        }
        else{
            if(s[i]=='R'){
                id=(id+1)%4;
            }
            else{
                id=(id+3)%4;
            }
        }
    }
    if(id==0) ch='N';
    else if(id==1) ch='E';
    else if(id==2) ch='S';
    else ch='W';
    sx=x,sy=y,cx=ch;
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int x,y;
    char ch;
    cin>>n>>m;
    while(cin>>x>>y>>ch>>s){
        f=0;
        dfs(x,y,ch);
        printf("%d %d %c",sx,sy,cx);
        if(f){
            printf(" LOST");
        }
        printf("\n");
    }

    return 0;
}



