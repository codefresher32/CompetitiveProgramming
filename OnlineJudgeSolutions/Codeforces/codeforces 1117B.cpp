#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pii pair<int,int>



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k,a[200005]={0},x,y;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n,greater<int>());
    ll sum=0;
    int cnt=0;
    x=m/(k+1);
    y=m-x;
    sum+=(ll)x*a[2];
    sum+=(ll)y*a[1];
    cout<<sum<<endl;
    return 0;
}


