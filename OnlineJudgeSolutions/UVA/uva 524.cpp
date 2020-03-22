#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003

bool p[55],vis[55];
int n,dq[20];


bool isP(int n)
{
    if(n%2==0&&n!=2){
        return false;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}



void subset(int cnt)
{
    if(cnt==n){
        if(p[1+dq[n-1]]){
            printf("1");
            for(int i=1;i<n;i++){
                printf(" %d",dq[i]);
            }
            printf("\n");
        }

        return ;
    }
    for(int i=2;i<=n;i++){
        if(!vis[i]&&p[i+dq[cnt-1]]){
            vis[i]=1;
            dq[cnt]=i;
            subset(cnt+1);
            vis[i]=0;
        }
    }
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    for(int i=1;i<=50;i++){
        if(isP(i)){
            p[i]=1;
        }
    }
    int id=0;
    while(scanf("%d",&n)!=EOF){
        if(id){
            printf("\n");
        }
        printf("Case %d:\n",++id);
        dq[0]=1;
        subset(1);
        memset(vis,0,sizeof(vis));
    }

    return 0;
}



