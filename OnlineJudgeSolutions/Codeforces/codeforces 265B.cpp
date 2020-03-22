#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[100005]={0},x,y,h;
    ll ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ans+=a[1]+1;
    for(int i=1;i<n;i++){
       h=min(a[i],a[i+1]);
       if(a[i]<a[i+1]){
            ans+=(a[i+1]-h)+1;
       }
       else{
            ans+=(a[i]-h)+1;
       }
       ans++;
    }
    //ans--;
    cout<<ans<<endl;
    return 0;
}

