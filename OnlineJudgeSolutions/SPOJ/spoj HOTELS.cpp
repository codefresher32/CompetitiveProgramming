#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7


int a[1000005];


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k,cnt,c;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l,r,mx,sum=0;
    l=r=1;
    mx=0;
    while(l<=r&&l<=n){
        while(r<=n&&sum+a[r]<=k){
            sum+=a[r];
            r++;
        }
        mx=max(mx,sum);
        sum-=a[l];
        l++;
    }
    cout<<mx<<endl;
    return 0;
}


