#include<stdio.h>
#include<string.h>
//using namespace std;

//typedef long long ll;

int fx[]={1,1,0,-1,-1,-1,0,1};
int fy[]={0,1,1,1,0,-1,-1,-1};
int cnt,n,m;
char s[105][105];
int vis[105][105];

void dfs(int r,int c)
{
    int x,y;
    if(r<0||c<0||r>=n||c>=m||s[r][c]=='L'||vis[r][c]){
        return ;
    }
    vis[r][c]=1;
    cnt++;
    for(int i=0;i<8;i++){
       x=r+fx[i];
       y=c+fy[i];
       dfs(x,y);
    }
    return ;
}



int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,x,y;
    char ch[105];
    scanf("%d ",&t);
    while(t--){
        memset(s,0,sizeof(s));
        n=0,m=0;
        //getchar();
        while(gets(ch)){
            if(ch[0]=='\0'){
                break;
            }
            if(ch[0]=='L'||ch[0]=='W'){
                m=strlen(ch);
                sscanf(ch,"%s",s[n]);
                n++;
            }
            else{
                cnt=0;
                sscanf(ch,"%d %d",&x,&y);
                dfs(x-1,y-1);
                printf("%d\n",cnt);
                memset(vis,0,sizeof(vis));
            }
        }
        if(t){
            printf("\n");
        }
    }
    return 0;
}
