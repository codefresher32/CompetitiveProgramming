#include<bits/stdc++.h>
using namespace std;

int a[200005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,q,l,r;
    cin>>n>>k>>q;
    while(n--){
        cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    for(int i=1;i<=200000;i++){
        a[i]+=a[i-1];
    }
    for(int i=1;i<=200000;i++){
        if(a[i]>=k){
            a[i]=1;
        }
        else{
            a[i]=0;
        }
    }
    for(int i=1;i<=200000;i++){
        a[i]+=a[i-1];
    }
    while(q--){
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<endl;
    }
    return 0;
}

