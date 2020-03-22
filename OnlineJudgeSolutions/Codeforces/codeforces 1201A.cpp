#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a[6],ar[1005]={0};
    char s[1005][1005];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
        }
    }
    for(int i=1;i<=m;i++){
        cin>>ar[i];
    }
    ll sum=0;
    for(int i=1;i<=m;i++){
        memset(a,0,sizeof(a));
        for(int j=1;j<=n;j++){
            if(s[j][i]=='A') a[1]++;
            else if(s[j][i]=='B') a[2]++;
            else if(s[j][i]=='C') a[3]++;
            else if(s[j][i]=='D') a[4]++;
            else a[5]++;
        }
        int mx=0;
        for(int i=1;i<=5;i++){
            mx=max(mx,a[i]);
        }
        sum+=(mx*ar[i]);
    }
    cout<<sum<<endl;
    return 0;
}


