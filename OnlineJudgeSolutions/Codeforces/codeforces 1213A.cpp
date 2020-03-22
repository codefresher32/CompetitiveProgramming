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


int mx,a[200005];
int n,m;

int ck(int mid)
{
    int x,y,cnt=0;
    vector<int>vc;
    for(int i=1;i<=n;i++){
        if(a[i]<mid) continue;
        else if(a[i]==mid){
            cnt++,vc.pb(0);
        }
        else{
            x=a[i],y=0;
            while(x>mid){
                x/=2,y++;
            }
            if(x==mid){
                cnt++,vc.pb(y);
            }
        }
    }
    if(cnt>=m){
        sort(vc.begin(),vc.end());
        for(int i=0;i<m;i++){
            mx+=vc[i];
        }
    }
    return cnt;
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int lo,hi,mid;
    lo=0,hi=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        hi=max(hi,a[i]);
    }
    int x,ans=INT_MAX;
    while(lo<=hi){
        mid=(lo+hi)/2;
        mx=0;
        x=ck(mid);
        if(x>=m){
            hi=mid-1;
            ans=min(ans,mx);
        }
        else{
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

