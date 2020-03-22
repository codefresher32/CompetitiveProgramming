#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
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
    int t,n,x,id=0;
    scanf("%d",&t);
    while(t--){
        int cnt=0;
        map<int,int>a;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&x);
            a[x]++;
        }
        int l,r;
        r=n-1,l=0;
        for(int i=1;i<=n;i++){
           if(a[l]) cnt++,a[l]--,l++,r--;
           else if(a[r]) cnt++,a[r]--,l++,r--;
           else break;
        }
        printf("Case %d: ",++id);
        if(cnt==n){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}


