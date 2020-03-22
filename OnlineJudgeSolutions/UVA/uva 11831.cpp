#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

char c[105][105];
int cnt,dir,n,m,k,sx,sy;
int fx[]={-1,0,1,0};
int fy[]={0,1,0,-1};

bool ck(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&c[x][y]!='#'){
        return true;
    }
    return false;
}

void dfs(char x)
{
    if(x=='D'||x=='E'){
        if(x=='D'){
            dir++;
        }
        else{
            dir--;
        }
        if(dir>3){
            dir=0;
        }
        else if(dir<0){
            dir=3;
        }
    }
    else{
        if(ck(sx+fx[dir],sy+fy[dir])){
            sx+=fx[dir];
            sy+=fy[dir];
            if(c[sx][sy]=='*'){
                c[sx][sy]='.';
                cnt++;
            }
        }
    }
    return ;
}

void getdir(char ch)
{
    if(ch=='L'){
        dir=1;
    }
    else if(ch=='S'){
        dir=2;
    }
    else if(ch=='O'){
        dir=3;
    }
    else {
        dir=0;
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char ch,s;
    while(cin>>n>>m>>k&&n&&m&&k){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>c[i][j];
                if(c[i][j]>='A'&&c[i][j]<='Z'){
                    ch=c[i][j];
                    sx=i,sy=j;
                }
            }
        }
        getdir(ch);
        cnt=0;
        for(int i=0;i<k;i++){
            cin>>s;
            dfs(s);
        }
        cout<<cnt<<endl;
    }
    return 0;
}


