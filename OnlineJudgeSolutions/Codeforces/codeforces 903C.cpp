#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[5005]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int t=1,ans=1;
    for(int i=0;i<n-1;i++){
       if(a[i]==a[i+1]){
            t++;
       }
       else{
            ans=max(ans,t);
            t=1;
       }
    }
    ans=max(ans,t);
    cout<<ans<<endl;
    return 0;
}
