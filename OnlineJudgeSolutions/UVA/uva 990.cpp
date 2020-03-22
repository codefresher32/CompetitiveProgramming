#include<bits/stdc++.h>
using namespace std;

int v[35],d[35],dp[35][1005],dir[35][1005],x[35];
int t,w,n;
vector<pair<int,int>>ve;

int kp(int i,int tr)
{
    if(i==n){
        return 0;
    }
    if(dp[i][tr]!=-1){
        return dp[i][tr];
    }
    int p1=0,p2=0;
    if(tr+d[i]<=t){
        p1=v[i]+kp(i+1,tr+d[i]);
    }
    p2=kp(i+1,tr);
    if(p1>p2){
        dir[i][tr]=1;
        return dp[i][tr]=p1;
    }
    else{
        dir[i][tr]=2;
        return dp[i][tr]=p2;
    }
}

void go(int i,int tr)
{
    if(dir[i][tr]==-1){
        return ;
    }
    if(dir[i][tr]==1){
        ve.push_back(make_pair(x[i],v[i]));
        go(i+1,tr+d[i]);
    }
    else{
        go(i+1,tr);
    }
}

int main()
{
    bool f=0;
   while(cin>>t>>w){
        memset(dp,-1,sizeof(dp));
        memset(dir,-1,sizeof(dir));
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x[i]>>v[i];
            d[i]=3*w*x[i];
        }
        int mx;
        mx=kp(0,0);
        if(f){
            cout<<"\n";
        }
        f=1;
        cout<<mx<<endl;
        go(0,0);
        cout<<ve.size()<<endl;
        for(int i=0;i<ve.size();i++){
            cout<<ve[i].first<<" "<<ve[i].second<<endl;
        }
        ve.clear();
   }
}
