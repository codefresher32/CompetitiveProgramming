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
#define mod 10000019

char s[2005][2005];
stack<int>lf,rg;
int ar[2005],l[2005],r[2005];


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,m,lm,ty,k,id=0;
    char c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++){
            scanf("%d %c",&k,&c);
            int l=1;
            lm=0;
            for(int j=1;j<=k;j++){
                scanf("%d",&ty);
                lm+=ty;
                for( ;l<=lm;l++){
                    s[i][l]=c;
                }
                c=(c=='0')?'1':'0';
            }
        }
        int mx=0;
        memset(ar,0,sizeof(ar));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i][j]=='0') ar[j]++;
                else ar[j]=0;
            }
            ar[0]=ar[m+1]=-INT_MAX;
            lf.push(0);
            for(int j=1;j<=m;j++){
                while(ar[lf.top()]>=ar[j]){
                    lf.pop();
                }
                l[j]=j-lf.top()-1;
                lf.push(j);
            }
            rg.push(m+1);
            for(int j=m;j>=1;j--){
                while(ar[rg.top()]>=ar[j]){
                    rg.pop();
                }
                r[j]=rg.top()-j-1;
                rg.push(j);
            }
            for(int j=1;j<=m;j++){
                mx=max(mx,(l[j]+r[j]+1)*ar[j]);
            }
        }
        printf("Case %d: %d\n",++id,mx);
    }
    return 0;
}

