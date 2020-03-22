#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back

bool com(vector<int>A,vector<int>B)
{
    for(int i=0;i<A.size();i++){
        if(A[i]<=B[i]){
            return false;
        }
    }
    return true;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,k,a;
    map<vector<int>,int>mp;
    while(scanf("%d %d",&k,&n)!=EOF){
        int dp[50]={0},dir[50]={0};
        vector<vector<int>>ar;
        for(int i=0;i<k;i++){
            vector<int>c;
            for(int j=0;j<n;j++){
                scanf("%d",&a);
                c.pb(a);
            }
            sort(c.begin(),c.end());
            mp[c]=i+1;
            ar.pb(c);
        }
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
                if(ar[i]>ar[j]){
                    swap(ar[i],ar[j]);
                }
            }
        }
//        printf("\n");
//        for(int i=0;i<k;i++){
//            for(int j=0;j<n;j++){
//                printf("%d ",ar[i][j]);
//            }
//            printf("\n");
//        }
        for(int i=0;i<k;i++){
            dir[i]=i;
        }
        int mx=1,st;
        dp[0]=1;
        for(int i=1;i<k;i++){
            dp[i]=1;
            for(int j=0;j<i;j++){
                if(com(ar[i],ar[j])&&dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                    dir[i]=j;
                }
            }
        }
        st=distance(dp,max_element(dp,dp+k));
        vector<int>c;
        printf("%d\n",dp[st]);
        while(dir[st]!=st){
            c.pb(mp[ar[st]]);
            st=dir[st];
        }
        c.pb(mp[ar[st]]);
        for(int i=c.size()-1;i>=0;i--){
            printf("%d ",c[i]);
        }
        printf("\n");
        mp.clear();
    }
    return 0;
}

