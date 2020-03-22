#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[105]={0},b[105]={0},dp[105][105],t=1;
    while(cin>>n>>m){
        if(n==0&&m==0){
            return 0;
        }
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=m;i++){
            cin>>b[i];
        }
        memset(dp,0,sizeof(dp));
        int cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i]==b[j]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",t,dp[n][m]);
        t++;
    }
}
