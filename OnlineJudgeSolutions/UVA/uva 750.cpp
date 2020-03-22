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

int mx,ix,qu[20];
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
    int t,n,r,c;
    ix=1;
    queen(1);
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&r,&c);
        printf("SOLN       COLUMN\n #     ");
        for(int i=1;i<=8;i++){
            printf(" %d",i);
        }
        printf("\n\n");
        int id=0;
        for(int i=1;i<=92;i++){
            if(G[i][c-1]==r){
                printf("%2d     ",++id);
                for(int v:G[i]){
                    printf(" %d",v);
                }
                printf("\n");
            }
        }
        if(t){
            printf("\n");
        }
    }
    return 0;
}



