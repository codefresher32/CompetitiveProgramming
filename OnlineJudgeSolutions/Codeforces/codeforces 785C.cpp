#include<bits/stdc++.h>
using namespace std;

long long n,m;

bool ck(long long x)
{
    long long y;
    y=m+x*(x+1)/2;
    if(y>=n){
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
    long long lo=1,hi=1e10+100,mid,ans;
    cin>>n>>m;
    if(m>=n){
        cout<<n<<endl;
        return 0;
    }
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
    cout<<m+ans<<endl;

    return 0;
}


