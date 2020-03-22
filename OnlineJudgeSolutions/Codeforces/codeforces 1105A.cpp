#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[1005]={0},sum=0,t,st=100000;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        st=min(a[i],st);
    }
    int mn=0,mx=INT_MAX;
    for(int i=st;i<=102;i++){
            mn=0;
        for(int j=1;j<=n;j++){
            if(abs(a[j]-i)>=2){
                mn+=abs(a[j]-i);
                mn--;
            }
        }
        if(mx>mn){
            t=i;
            mx=mn;
        }
    }
    cout<<t<<" "<<mx<<endl;
    return 0;
}


