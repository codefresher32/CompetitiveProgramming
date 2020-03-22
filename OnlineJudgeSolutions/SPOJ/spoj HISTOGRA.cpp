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
#define mod 10000019

ll ar[100005],l[100005],r[100005];
stack<int>lf,rg;

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,id=0;
    while(scanf("%d",&n),n){
        for(int i=1;i<=n;i++){
            scanf("%lld",&ar[i]);
        }
        lf.push(0);
        ar[0]=ar[n+1]=-INT_MAX;
        for(int i=1;i<=n;i++){
             while(ar[lf.top()]>=ar[i]){
                lf.pop();
             }
             l[i]=i-lf.top()-1;
             lf.push(i);
        }
        rg.push(n+1);
        for(int i=n;i>=1;i--){
            while(ar[rg.top()]>=ar[i]){
                rg.pop();
            }
            r[i]=rg.top()-i-1;
            rg.push(i);
        }
        ll mx=0;
        for(int i=1;i<=n;i++){
            mx=max(mx,(l[i]+r[i]+1)*ar[i]);
        }
        printf("%lld\n",mx);
    }
    return 0;
}
