#include<bits/stdc++.h>
using namespace std;

long long n,k,m,d,ret;

bool ck(long long x)
{
   long long dv,a,b;
   dv=n/(k*x);
   if(n%(k*x)>=x){
    dv++;
   }
   if(dv>d){
    return false;
   }
    ret=dv*x;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k>>m>>d;
    long long lo=1,hi=m,mid,ans=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ck(mid)){
            ans=max(ret,ans);
            lo=mid+1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
