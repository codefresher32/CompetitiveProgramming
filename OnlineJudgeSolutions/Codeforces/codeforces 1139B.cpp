#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[200005]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll mx=0,l=0;
    for(int i=n;i>=1;i--){
       if(l>a[i]||i==n){
            mx+=a[i];
            l=a[i];
       }
       else if(l-1>0&&l-1<=a[i]){
            mx+=l-1;
            a[i]=a[i]-(l-1);
            l--;
       }
    }
    cout<<mx<<endl;
    return 0;
}
