#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[200005]={0},k,h;
    ll sum=0;
    int mn=INT_MAX,mx=INT_MIN;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>h;
        a[h]++;
        mn=min(mn,h);
        mx=max(mx,h);
    }
    for(int i=mx;i>mn;i--){
       a[i]+=a[i+1];
    }
    ll cur=0,cnt=0;

    for(int i=mx;i>mn;i--){
        if(cur+a[i]>k){
            cnt++;
            cur=0;
        }
        cur+=a[i];
    }
    if(cur){
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


