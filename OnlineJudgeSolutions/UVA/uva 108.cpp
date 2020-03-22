#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
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

ll ar[105][105];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%lld",&ar[i][j]);
            ar[i][j]+=ar[i-1][j];
            ar[i][j]+=ar[i][j-1];
            ar[i][j]-=ar[i-1][j-1];
        }
    }
    ll mx=-127*100*100,sub;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=i;k<=n;k++){
                for(int l=j;l<=n;l++){
                    sub=ar[k][l];
                    sub-=ar[i-1][l];
                    sub-=ar[k][j-1];
                    sub+=ar[i-1][j-1];
                    mx=max(mx,sub);
                }
            }
        }
    }
    printf("%lld\n",mx);
    return 0;
}



