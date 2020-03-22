#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 4294967296
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))
#define M 5761600

int ar[55],dp[55][55];

int call(int left,int right)
{
    if(left+1==right) return 0;
    int &ret=dp[left][right];
    if(ret!=-1) return ret;
    int ans=INT_MAX;
    for(int i=left+1;i<right;i++){
        ans=min(ans,call(left,i)+call(i,right)+ar[right]-ar[left]);
    }
    return ret=ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,cap;
    while(scanf("%d",&cap),cap){
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%d",&ar[i]);
        memset(dp,-1,sizeof dp);
        ar[0]=0,ar[n+1]=cap;
        printf("The minimum cutting is %d.\n",call(0,n+1));
    }

    return 0;
}


