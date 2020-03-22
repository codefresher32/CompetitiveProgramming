#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll s=0;
    int n,m,a[100005]={0};
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
    }
    sort(a+1,a+1+n);
    int c,uc,in,mx;
    mx=a[n];
    c=mx+n;
    in=1;
    for(int i=1;i<=n;i++){
        if(a[i]>=in&&in<=mx){
            in++;
            c--;
        }
    }
    cout<<s-c<<endl;
    return 0;
}
