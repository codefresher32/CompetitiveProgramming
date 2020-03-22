#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000000007

int phi[50005];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    for(int i=1;i<=50000;i++) phi[i]=i;

    for(int i=2;i<=50000;i++){
        if(phi[i]==i){
            for(int j=i;j<=50000;j+=i){
                phi[j]-=(phi[j]/i);
            }
        }
    }
    for(int i=3;i<=50000;i++) phi[i]+=phi[i-1];
    int n,ans;
    while(scanf("%d",&n),n){
        ans=(n==1)?phi[1]:2*phi[n]+1;
        printf("%d\n",ans);
    }
    return 0;
}


