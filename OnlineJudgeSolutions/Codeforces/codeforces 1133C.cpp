#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,string>
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
    sort(a+1,a+1+n);
    int cnt=0,l=1,r=1,mx=1;
    while(l<=r&&r<=n&&l<=n){
        if(l==r){
            cnt++;
            r++;
        }
        if(a[r]-a[l]<=5&&r<=n){
            cnt++;
            r++;
            mx=max(mx,cnt);
        }
        else{
            l++;
            cnt--;
        }
    }
    cout<<mx<<endl;
    return 0;
