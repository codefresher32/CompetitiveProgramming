#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,s,sum=0;
    cin>>n>>s;
    int a[1005]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n,greater<int>());
    if(sum<s){
        cout<<-1<<endl;
        return 0;
    }
    int mx=a[n-1];
    ll lo=0,hi=mx,mid,maxi=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(sum-(mid*n)>=s){
            maxi=max(mid,maxi);
            lo=mid+1;
        }
        else if(sum-(mid*n)<s){
            hi=mid-1;
        }
    }
    cout<<maxi<<endl;
    return 0;
}
