#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pi pair<int,int>
#define pii pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007


int dp[105][105];


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,x,len,id=0;
    scanf("%d",&t);
    string s,rs;
    while(t--){
        cin>>s;rs=s;
        reverse(rs.begin(),rs.end());
        len=s.size();
        memset(dp,0,sizeof dp);
        for(int i=1;i<=len;i++){
            for(int j=1;j<=len;j++){
                if(s[i-1]==rs[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        printf("Case %d: %d\n",++id,len-dp[len][len]);
    }
    return 0;
}

