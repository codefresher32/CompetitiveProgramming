#include<bits/stdc++.h>
using namespace std;

int n,k;

bool ck(int x)
{
    int sum=0;
    sum+=x;
    while(x){
        x/=k;
        sum+=x;
    }
    if(sum>=n){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    int lo=1,hi=n,mid,ans;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ck(mid)){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

