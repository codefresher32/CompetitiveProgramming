#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000

ll nCr[300][300];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,k;
    nCr[0][0]=1;
    for(int i=1;i<=250;i++){
        nCr[i][0]=1;
        for(int j=1;j<=i;j++) nCr[i][j]=(nCr[i-1][j]+nCr[i-1][j-1])%mod;
    }
    while(scanf("%d %d",&n,&k),(n+k)){
        printf("%lld\n",nCr[n+k-1][k-1]);
    }
    return 0;
}

