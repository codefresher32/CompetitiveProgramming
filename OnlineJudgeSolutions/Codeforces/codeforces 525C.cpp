#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a[100005]={0},x,y;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll sum=0;
    sort(a+1,a+1+n,greater<int>());
    for(int i=1;i<=n-3;i++){
        if(a[i]==a[i+1]||(a[i]-1)==a[i+1]){
            x=min(a[i],a[i+1]);
            for(int j=i+2;j<=n;j++){
                if(a[j]==a[j+1]||(a[j]-1)==a[j+1]){
                    y=min(a[j],a[j+1]);
                    sum+=x*y;
                    i=j+1;
                    break;
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}




