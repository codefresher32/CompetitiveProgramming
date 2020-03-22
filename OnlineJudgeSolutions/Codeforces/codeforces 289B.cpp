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
#define mod 10
#define ex 1e-7


int n,m,d,a[105][105];

int ck(int mid)
{
    int x,cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            x=abs(mid-a[i][j]);
            if(x%d) return -1;
            cnt+=(x/d);
        }
    }
    return cnt;
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m>>d;
    int lo,hi,mid1,mid2,ans;
    lo=1,hi=0,ans=-1;
    int x1,x2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            hi=max(a[i][j],hi);
        }
    }

    while(hi-lo>3){
        mid1=lo+(hi-lo)/3;
        mid2=hi-(hi-lo)/3;
        x1=ck(mid1);
        x2=ck(mid2);
        if(x1>x2){
            lo=mid1;
        }
        else{
            hi=mid2;
        }
    }
    int x,mn=INT_MAX;
    for(int i=lo;i<=hi;i++){
        x=ck(i);
        mn=min(mn,x);
    }
    cout<<lo<<" "<<hi<<endl;
    if(mn==INT_MAX) cout<<-1<<endl;
    else cout<<mn<<endl;
    return 0;
}


/*
3 3 3
5 8 5
11 11 17
14 5 2
*/


