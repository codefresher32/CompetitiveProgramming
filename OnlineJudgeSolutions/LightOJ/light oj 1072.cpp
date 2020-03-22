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


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double r,n,p,ans;
    int t,id=0;

    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf",&r,&n);
        p=acos(-1);
        ans=sin(p/n)*r/(1+sin(p/n));
        printf("Case %d: %0.10f\n",++id,ans);
    }

    return 0;
}


