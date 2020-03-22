#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[2005]={0},dp1[2005]={0},dp2[2005]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            dp1[i]=1;
            dp2[i]=1;
        }
        int mx=0;
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    dp1[i]=max(dp1[j]+1,dp1[i]);
                }
                if(a[i]<a[j]){
                    dp2[i]=max(dp2[j]+1,dp2[i]);
                }
            }
            mx=max(mx,dp1[i]+dp2[i]-1);
        }
        cout<<mx<<endl;
    }
    return 0;
}

