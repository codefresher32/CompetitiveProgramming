#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int coin[]={1,5,10,25,50},dp[6][7500];

int kp(int i,int cp)
{
    if(i>=5){
        if(cp==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(dp[i][cp]!=-1){
        return dp[i][cp];
    }
    int p1=0,p2=0;
    if(cp-coin[i]>=0){
        p1=kp(i,cp-coin[i]);
    }
    p2=kp(i+1,cp);
    return dp[i][cp]=p1+p2;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    memset(dp,-1,sizeof(dp));
    while(cin>>n){
        cout<<kp(0,n)<<endl;
    }
    return 0;
}


