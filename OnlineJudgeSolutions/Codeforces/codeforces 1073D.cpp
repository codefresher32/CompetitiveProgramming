#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[200005]={0};
    ll t,cnt=0,d;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(true){
       for(int i=0;i<n;i++){
            if(a[i]<=t){
                t-=a[i];
                cnt++;
            }
       }
       ll nn=0,s=0;
       for(int i=0;i<n;i++){
            if(a[i]<=t){
                s+=a[i];
                nn++;
            }
       }
       if(nn==0){
            break;
       }
       cnt+=(t/s)*nn;
       t%=s;
    }
    cout<<cnt<<endl;
    return 0;
}

