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

ll a[1005];


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%64d",&a[i]);
        }
        int mx=2;
        ll sum=a[1];
        for(int i=2;i<n;i++){
            if(sum+a[i]<a[i+1]){
                mx++;
                sum+=a[i];
            }
        }

        printf("%d\n",mx);
    }
    return 0;
}


