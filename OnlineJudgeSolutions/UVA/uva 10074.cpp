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

int ar[500][500];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t,n,m,a;
    while(scanf("%d %d",&n,&m),(n+m)){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%d",&a);
                ar[i][j]=!a;
                ar[i][j]+=ar[i-1][j];
                ar[i][j]+=ar[i][j-1];
                ar[i][j]-=ar[i-1][j-1];
            }
        }
        int sub,siz,mx=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                for(int k=i;k<=n;k++){
                    for(int l=j;l<=m;l++){
                        sub=ar[k][l]-ar[i-1][l]-ar[k][j-1]+ar[i-1][j-1];
                        siz=k*l-(i-1)*l-k*(j-1)+(i-1)*(j-1);
                        if(siz==sub) mx=max(mx,sub);
                    }
                }
            }
        }
        printf("%d\n",mx);
    }

}

