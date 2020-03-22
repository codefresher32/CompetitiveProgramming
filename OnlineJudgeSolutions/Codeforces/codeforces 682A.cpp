#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,a[5]={0},b[5]={0};
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        a[i%5]++;
    }
    for(int i=1;i<=m;i++){
        b[i%5]++;
    }
    ll sum=0;
    int x;
    for(int i=0;i<5;i++){
        x=5-i==5?0:5-i;
        sum+=a[i]*b[x];
    }
    cout<<sum<<endl;
    return 0;
}


