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

int mx,a[70][70];
bool col[20],dia1[20],dia2[20];


void queen(int id,int sum)
{
    if(id>8){
        mx=max(mx,sum);
        return ;
    }

    for(int i=1;i<=8;i++){
        if(!col[i]&&!dia1[i+id]&&!dia2[8+i-id]){
            col[i]=dia1[i+id]=dia2[8+i-id]=1;
            queen(id+1,sum+a[i][id]);
            col[i]=dia1[i+id]=dia2[8+i-id]=0;
        }
    }
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n;
    scanf("%d",&t);
    while(t--){
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                scanf("%d",&a[i][j]);
                col[j]=dia1[j]=dia2[j]=0;
            }
        }
        mx=0;
        queen(1,0);
        printf("%5d\n",mx);
    }
    return 0;
}


