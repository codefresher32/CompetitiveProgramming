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


struct ar
{
    int v,id;
}a[75],b[75];


bool com(ar A,ar B)
{
    return A.v>B.v;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,aa;
    while(scanf("%d %d",&n,&m)!=EOF){
        if(!(n+m)) break;
        for(int i=1;i<=n;i++){
            scanf("%d",&aa);
            a[i].v=aa,a[i].id=i;
        }
        for(int i=1;i<=m;i++){
            scanf("%d",&aa);
            b[i].v=aa,b[i].id=i;
        }
        sort(a+1,a+1+n,com);
        sort(b+1,b+1+m,com);
        vector<int>vc[75];
        bool f=0;
        for(int i=1;i<=n;i++){
            int j=1;
            while(a[i].v&&j<=m&&b[j].v){
                vc[a[i].id].pb(b[j].id);
                b[j].v--,a[i].v--;
                j++;
            }
            if(a[i].v){
                f=1;
                break;
            }
        }
        if(f){
            printf("0\n");
        }
        else{
            printf("1\n");
            for(int i=1;i<=n;i++){
                printf("%d",vc[i][0]);
                for(int j=1;j<vc[i].size();j++){
                    printf(" %d",vc[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}

