#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int eu[1000005];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n=1000000;
    for(int i=1;i<=n;i++) eu[i]=i;

    for(int i=2;i<=n;i++){
        if(eu[i]==i){
            for(int j=i;j<=n;j+=i){
                eu[j]-=(eu[j]/i);
            }
        }
    }
    int t,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&m);
        printf("%d\n",eu[m]);
    }
    return 0;
}
