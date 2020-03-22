#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,ans;
    ll gc=0,a,b,x;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(i==1){
            x=a;
        }
        else{
            gc=__gcd(gc,a-x);
        }
    }
    ans=-1;
    for(int j=1;j<=m;j++){
        cin>>b;
        if(gc%b==0){
            ans=j;
        }
    }
    if(ans==-1){
        printf("NO\n");
    }
    else{
        printf("YES\n%lld %d\n",x,ans);
    }
    return 0;
}



