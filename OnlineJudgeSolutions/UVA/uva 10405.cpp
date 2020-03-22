#include<bits/stdc++.h>
using namespace std;

char s1[1005],s2[1005];
int dp[1005][1005];

int lcs(int i,int j)
{
    if(s1[i]=='\0'||s2[j]=='\0'){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans;
    if(s1[i]==s2[j]){
        ans=1+lcs(i+1,j+1);
    }
    else{
        ans=max(lcs(i+1,j),lcs(i,j+1));
    }
    return dp[i][j]=ans;
}


int main()
{
    int mx;
    while(gets(s1)){
        gets(s2);
        memset(dp,-1,sizeof(dp));
        mx=lcs(0,0);
        cout<<mx<<endl;
    }
    return 0;
}
