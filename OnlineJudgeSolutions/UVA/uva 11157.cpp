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

vector<int>a;

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,t,v,id=0;
    char ch;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++){
            cin>>ch;
            cin.ignore();
            cin>>v;
            a.pb(v);
            if(ch=='B') a.pb(v);
        }
        a.pb(0);
        a.pb(m);
        sort(a.begin(),a.end());
        n=a.size();
        int mx=0;
        for(int i=3;i<n;i+=2){
            mx=max(mx,a[i]-a[i-2]);
        }
        for(int i=2;i<n;i+=2){
            mx=max(mx,a[i]-a[i-2]);
        }
        printf("Case %d: %d\n",++id,mx);
        a.clear();
    }
    return 0;
}

