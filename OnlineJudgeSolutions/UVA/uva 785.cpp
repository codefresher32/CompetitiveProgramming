#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char s[105][105],tr;
int fx[4]={1,-1,0,0};
int fy[4]={0,0,1,-1};


void dfs(int x,int y)
{
    int nx,ny,i;
    s[x][y]=tr;
    for(i=0;i<4;i++){
        nx=x+fx[i];
        ny=y+fy[i];
        if(s[nx][ny]==' '){
            dfs(nx,ny);
        }
    }
}


int main()
{
    int t,id,i,j,m;
    while(1){
        id=0;
        while(1){
            if(!gets(s[id])){
                return 0;
            }
            if(s[id][0]=='_'){
                break;
            }
            id++;
        }
        for(i=0;i<id;i++){
            m=strlen(s[i]);
            for(j=0;j<m;j++){
                if(s[i][j]!='X'&&s[i][j]!=' '){
                    tr=s[i][j];
                    dfs(i,j);
                }
            }
        }

        for(i=0;i<=id;i++){
            printf("%s\n",s[i]);
        }

    }
    return 0;
}


