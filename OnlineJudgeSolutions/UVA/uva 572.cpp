#include<stdio.h>
//using namespace std;

char s[101][101];
int n,m;

void floodfill(int i,int j)
{
    if(i<0||j<0||i>=n||j>=m||s[i][j]!='@')
        return ;
    s[i][j]='*';
    floodfill(i-1,j);
    floodfill(i-1,j+1);
    floodfill(i-1,j-1);
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j);
    floodfill(i+1,j+1);
    floodfill(i+1,j-1);
}

int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            return 0;
        for(int i=0;i<n;i++)
        {
           scanf("%s",s[i]);
        }
        int cnt=0,i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='@')
                {
                    floodfill(i,j);
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }
}
