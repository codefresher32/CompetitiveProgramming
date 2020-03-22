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

int ar[100005];
int n,c;

bool ck(int x)
{
   int cnt=1,po,lw;
   po=ar[0];
   while(cnt<c){
       lw=lower_bound(ar,ar+n,po+x)-ar;
       if(ar[lw]<po+x){
            lw++;
       }
       if(lw<n&&ar[lw]>=po+x){
            cnt++;
            po=ar[lw];
       }
       else{
            break;
       }
   }
   if(cnt==c){
        return true;
   }
   return false;
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,m;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&n,&c);
        int lo,hi,mid;
        lo=1,hi=0;
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
            hi=max(ar[i],hi);
        }
        sort(ar,ar+n);
        int ans=0;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(ck(mid)){
                ans=max(ans,mid);
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        printf("%d\n",ans);

    }
    return 0;
}

