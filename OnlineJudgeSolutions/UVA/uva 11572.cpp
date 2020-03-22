#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int a[1000005];


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,l,r,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int mx=0;
        map<int,bool>vis;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        l=r=1;
        while(l<=r&&l<=n){
            while(r<=n&&!vis[a[r]]){
                vis[a[r]]=1;
                r++;
            }
            x=vis.size();
            mx=max(mx,x);
            vis.erase(a[l]);
            l++;
        }
        printf("%d\n",mx);
    }
    return 0;
}

