#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[35][35];
int fx[]={1,-1,0,0,1,-1,-1,1};
int fy[]={0,0,1,-1,1,1,-1,-1};
int cnt;


void dfs(int x,int y)
{
    int nx,ny,i;
    s[x][y]='0';
    cnt++;
    for(i=0;i<8;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(s[nx][ny]=='1'){
            dfs(nx,ny);
        }
    }
}


int main()
{
    int t,id,i,j,m;
    scanf("%d",&t);
    gets(s[0]);
    gets(s[0]);
    while(t--){
        id=0;
        memset(s,0,sizeof(s));
        while(gets(s[id])){
            if(s[id][0]=='\0'){
                break;
            }
            id++;
        }
        int mx=0;
        for(i=0;i<id;i++){
            m=strlen(s[i]);
            for(j=0;j<m;j++){
                if(s[i][j]=='1'){
                    dfs(i,j);
                    if(mx<cnt){
                        mx=cnt;
                    }
                    cnt=0;
                }
            }
        }
        printf("%d\n",mx);
        if(t){
            printf("\n");
        }
    }
    return 0;
}


