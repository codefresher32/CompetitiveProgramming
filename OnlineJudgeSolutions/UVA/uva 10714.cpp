#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7





int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,n,a,mx,mn,x,s,l;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&x,&n);
        mx=s=0,mn=INT_MAX;
        for(int i=1;i<=n;i++){
            scanf("%d",&a);
            mx=max(mx,a);
            mn=min(mn,a);
            if(2*a<=x){
                s=max(s,a);
            }
            else{
                s=max(s,x-a);
            }
        }
        l=max(mx,x-mn);
        printf("%d %d\n",s,l);
    }
    return 0;
}


