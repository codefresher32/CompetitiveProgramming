#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ck(ll k,ll n)
{
    ll sum=0,x,y;
    for(int i=1;n;i++){
        if(i&1){
            if(k<n){
                sum+=k;
                n-=k;
            }
            else{
                sum+=n;
                n-=n;
            }
        }
        else{
            if(n>9){
                n-=(n/10);
            }
        }
    }
    return sum;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,lo,hi,mid,hf,mx=1e18;
    cin>>n;
    hf=(n-1)/2+1;
    lo=1,hi=n;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(hf<=ck(mid,n)){
            mx=min(mx,mid);
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<mx<<endl;
    return 0;
}
