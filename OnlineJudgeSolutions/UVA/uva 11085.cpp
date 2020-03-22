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

int ix,qu[20];
vector<int>G[100];
bool row[20],dia1[20],dia2[20];


void queen(int id)
{
    if(id>8){
        for(int i=1;i<=8;i++){
            G[ix].pb(qu[i]);
        }
        ix++;
        return ;
    }

    for(int i=1;i<=8;i++){
        if(!row[i]&&!dia1[i+id]&&!dia2[8+i-id]){
            row[i]=dia1[i+id]=dia2[8+i-id]=1;
            qu[id]=i;
            queen(id+1);
            row[i]=dia1[i+id]=dia2[8+i-id]=0;
        }
    }
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,r,id,a[8];
    ix=1,id=0;
    queen(1);
    while(scanf("%d",&r)!=EOF){
        a[0]=r;
        for(int i=1;i<8;i++){
            scanf("%d",&a[i]);
        }
        int mx,mn=INT_MAX;
        for(int i=1;i<=92;i++){
            mx=0;
            for(int j=0;j<8;j++){
                //printf("%d ",G[i][j]);
                //mx+=abs(G[i][j]-a[j]);
                if(G[i][j]!=a[j]){
                    mx++;
                }
            }
            //printf(" %d\n",mx);
            mn=min(mn,mx);
        }
        printf("Case %d: %d\n",++id,mn);
    }
    return 0;
}



