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

int a[100005];
int n,m;

bool ck(int mid)
{
    int x;
   for(int i=0;i<n;i++){
       x=a[i+1]-a[i];
       if(x>mid){
            return false;
       }
       if(x==mid) mid--;
   }
   return true;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,lo,hi,mid,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        lo=1,hi=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            hi=max(a[i],hi);
        }
        while(lo<hi){
            mid=(hi+lo)/2;
            if(ck(mid)){
                hi=mid;
            }
            else{
                lo=mid+1;
            }
        }
        printf("Case %d: %d\n",++id,hi);
    }
    return 0;
}

