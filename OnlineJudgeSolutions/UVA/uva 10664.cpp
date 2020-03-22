#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int ar[25],n,dp[25][205];

int kp(int i,int cp)
{
    int p1=0,p2=0;
    if(i==n){
        return 0;
    }
    if(dp[i][cp]!=-1){
        return dp[i][cp];
    }
    if(cp-ar[i]>=0){
        p1=ar[i]+kp(i+1,cp-ar[i]);
    }
    p2=kp(i+1,cp);
    return dp[i][cp]=max(p1,p2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,sum,i,v;
    cin>>t;
    string s;
    stringstream ss;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        ss.clear();
        ss<<s;
        i=0,sum=0;
        while(ss>>a){
           ar[i++]=a;
           sum+=a;
        }
        n=i;
        a=sum/2;
        if(sum&1){
            cout<<"NO\n";
        }
        else{
            memset(dp,-1,sizeof(dp));

           v=kp(0,a);
           if(v==a){
            cout<<"YES\n";
           }
           else{
            cout<<"NO\n";
           }
        }
    }
    return 0;
}

