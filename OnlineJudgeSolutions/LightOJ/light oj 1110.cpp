#include<bits/stdc++.h>
using namespace std;

string s[105][105];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,ts=1;
    cin>>t;
    while(t--){
        int dp[105][105],n,m;
        string s1,s2;
        memset(dp,0,sizeof(dp));

        cin>>s1>>s2;
        n=s1.size();
        m=s2.size();

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    s[i][j]=s[i-1][j-1]+s1[i-1];
                }
                else{
                    if(dp[i-1][j]>dp[i][j-1]){
                        dp[i][j]=dp[i-1][j];
                        s[i][j]=s[i-1][j];
                    }
                    else if(dp[i-1][j]<dp[i][j-1]){
                        dp[i][j]=dp[i][j-1];
                        s[i][j]=s[i][j-1];
                    }
                    else{
                        dp[i][j]=dp[i][j-1];
                        s[i][j]=min(s[i-1][j],s[i][j-1]);
                    }
                }
            }
        }
         if(dp[n][m]==0){
            cout<<"Case "<<ts<<": :("<<endl;
         }
        else{
            cout<<"Case "<<ts<<": "<<s[n][m]<<endl;
        }
        ts++;
    }
    return 0;
}
