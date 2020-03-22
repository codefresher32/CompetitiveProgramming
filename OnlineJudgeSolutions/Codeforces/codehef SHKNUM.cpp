#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T;
    ll n,m,x1,x2,y;
    ll ar[35];
    for(int i=0;i<=32;i++){
        ar[i]=(1<<i);
    }
    scanf("%d",&T);
    while(T--){
        scanf("%lld",&n);
        ll mn=INT_MAX;
        for(int i=0;i<32;i++){
            for(int j=0;j<32;j++){
                if(i==j){
                    continue;
                }
                m=ar[i]+ar[j];
                if(mn>abs(n-m)){
                    mn=abs(n-m);
                }
            }
        }

        printf("%lld\n",mn);
    }
    return 0;
}



