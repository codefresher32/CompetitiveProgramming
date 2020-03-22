#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l,n,a[1005]={0};
    cin>>n>>l;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int mx;
    mx=2*max(a[0],l-a[n-1]);
    for(int i=0;i<n-1;i++){
        mx=max(mx,a[i+1]-a[i]);
    }
    cout<<fixed<<setprecision(10)<<(double)mx/2<<endl;
    return 0;
}

