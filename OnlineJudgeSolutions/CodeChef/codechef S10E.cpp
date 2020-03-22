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

int r[105];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&ar[i]);
        }
        int c1,c2,ans=0;
        for(int i=1;i<=n;i++){
            c1=c2=0;
            for(int j=i-1;j>=1&&c1<5;j--){
                if(ar[i]<ar[j]) c2++;
                c1++;
            }
            if(c1==c2) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}

