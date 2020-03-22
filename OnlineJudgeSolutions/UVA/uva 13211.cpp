#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pi pair<char,int>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007

int ar[505];
ll mat[505][505];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,len,n,u,v,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&mat[i][j]);
            }
        }
        for(int i=0;i<n;i++) scanf("%d",&ar[i]);
        ll ans=0;
        for(int k=n-1;k>=0;k--){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    mat[i][j]=min(mat[i][j],mat[i][ar[k]]+mat[ar[k]][j]);
                }
            }
            for(int i=k;i<n;i++){
                for(int j=i+1;j<n;j++){
                    ans+=mat[ar[i]][ar[j]]+mat[ar[j]][ar[i]];
                }
            }
        }
        printf("%lld\n",ans);
    }

    return 0;
}

