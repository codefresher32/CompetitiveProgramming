#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    while(cin>>n){
        int a[25],b[25],dp[25][25];
        for(int i=1;i<=n;i++){
           cin>>x;
           a[x]=i;
        }
        while(true){
            bool f=0;
            for(int i=1;i<=n;i++){
                if(scanf("%d",&x)==EOF){
                    f=1;
                    break;
                }
                b[x]=i;
            }
            if(f){
                break;
            }
            memset(dp,0,sizeof(dp));
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(a[i]==b[j]){
                        dp[i][j]=dp[i-1][j-1]+1;
                    }
                    else{
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
            cout<<dp[n][n]<<endl;
        }
    }
    return 0;
}
