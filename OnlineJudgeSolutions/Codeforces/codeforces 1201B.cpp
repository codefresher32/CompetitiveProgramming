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
    int n,a,mx=0;
    ll sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        sum+=a;
        mx=max(mx,a);
    }
    if(sum&1||2*mx>sum){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }

    return 0;
}



