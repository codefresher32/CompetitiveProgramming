#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()
{
    int a[100005]={0},dp[100005]={0},n=0,x,t=1;
    while(true){
        n=0;
        while(cin>>x){
            if(x==-1){
                if(!n){
                    return 0;
                }
                else{
                    break;
                }
            }
            a[n]=x;
            dp[n]=1;
            n++;
        }
        for(int i=1;i<n;i++){
            dp[i]=1;
            for(int j=0;j<i;j++){
                if(a[i]<=a[j]){
                    dp[i]=max(dp[j]+1,dp[i]);
                }
            }
        }
        if(t!=1){
            cout<<endl;
        }
        int mx=distance(dp,max_element(dp,dp+n));
        printf("Test #%d:\n  maximum possible interceptions: %d\n",t++,dp[mx]);
    }

    return 0;
}

