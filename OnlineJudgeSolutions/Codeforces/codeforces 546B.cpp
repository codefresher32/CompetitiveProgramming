#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[3005]={0},c[3005]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        c[a[i]]=1;
    }
    sort(a+1,a+1+n);
    int ans=0,x;
    for(int i=1;i<n;i++){
        if(a[i]>=a[i+1]){
            x=a[i]-a[i+1]+1;
            ans+=x;
            a[i+1]+=x;
        }
    }
    cout<<ans<<endl;

    return 0;
}

