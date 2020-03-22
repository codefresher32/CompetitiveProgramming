#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a[200005]={0},mx=-1;
    cin>>n;
    deque<ll>d1,d2;
    for(int i=0;i<n/2;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    ll f,l=mx,x,y,cnt=0;
    for(int i=0;i<n/2;i++){
        if(a[i]<=l){
            if(f>0){
                f=f;
                l=a[i]-f;
            }
            else{
                f=0;
                l=a[i];
            }
            d1.push_back(f);
            d2.push_front(l);
        }
        else{
            x=a[i]-l;
            if(x<f){
                x=f;
                l=a[i]-f;
            }
            d2.push_front(l);
            d1.push_back(x);
            f=x;
        }
    }
    for(auto it:d1){
        cout<<it<<" ";
    }
    for(auto it:d2){
        cout<<it<<" ";
    }
    return 0;
}

