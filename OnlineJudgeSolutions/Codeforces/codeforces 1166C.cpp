#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[200005]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]=abs(a[i]);
    }
    sort(a+1,a+1+n);
    int lo,hi,mid,pos;
    ll d,ans=0;
    for(int i=1;i<=n;i++){
       d=2ll*a[i];
       lo=i+1;
       hi=n;
       pos=-1;
       while(lo<=hi){
            mid=(lo+hi)/2;
            if(a[mid]<=d){
                pos=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
       }
       if(pos!=-1){
            ans+=pos-i;
       }
    }
    cout<<ans<<endl;
    return 0;
}


