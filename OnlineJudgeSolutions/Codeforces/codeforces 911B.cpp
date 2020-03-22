#include<bits/stdc++.h>
using namespace std;

int n,a,b;

bool ck(int x)
{
    int c,d1,d2;
    d1=a/x;
    d2=b/x;
    c=d1+d2;
    if(c<n||(d1==0||d2==0)){
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>a>>b;
    int lo,hi,mid,ans;
    lo=1;
    hi=(a+b)/n;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ck(mid)){
           ans=mid;
           lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

