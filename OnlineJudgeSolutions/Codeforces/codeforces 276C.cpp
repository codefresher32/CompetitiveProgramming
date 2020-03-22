#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q,l,r,a[200005]={0},c[200005]={0};
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n,greater<int>());
    while(q--){
        cin>>l>>r;
        c[l]++;
        c[r+1]--;
    }
    for(int i=1;i<=n+1;i++){
        c[i]+=c[i-1];
    }
    sort(c+1,c+1+n,greater<int>());
    ll sum=0;
    for(int i=1;i<=n;i++){
        sum+=(a[i]*c[i]);
    }
    cout<<sum<<endl;
    return 0;
}


