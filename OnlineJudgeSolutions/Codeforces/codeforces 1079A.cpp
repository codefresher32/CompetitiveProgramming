#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,a[105],c[105]={0},mx=-1;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        c[a[i]]++;
        mx=max(mx,c[a[i]]);
    }
    int s;
    s=mx/k;
    if(mx%k!=0){
        s++;
    }
    s*=k;
    int ans=0;
    for(int i=1;i<=100;i++){
        if(c[i]){
          ans+=s-c[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}

