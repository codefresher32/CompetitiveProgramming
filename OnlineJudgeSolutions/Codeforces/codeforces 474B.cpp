#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a[100005]={0},q;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    cin>>m;
    int x;
    while(m--){
        cin>>q;
       x=lower_bound(a+1,a+1+n,q)-a;
       cout<<x<<endl;
    }
    return 0;
}
