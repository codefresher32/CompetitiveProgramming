#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,ll>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 10
#define ex 1e-7

int n,m,cnt;
string s;
char ans[30];
bool vis[30];


void subset(int id)
{
    if(cnt>=m) return ;
    if(id==n&&cnt<m){
        printf("%s\n",ans);
        cnt++;
        return;
    }

    for(int i=0;i<n;i++){
        if(!vis[i]&&cnt<m){
            vis[i]=1;
            ans[id]=s[i];
            subset(id+1);
            vis[i]=0;
        }
    }
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,id=0;
    scanf("%d",&t);
    s='A';
    for(int i=1;i<=25;i++){
        s+=(s[0]+i);
    }
    //cout<<s<<endl;
    while(t--){
        cnt=0;
        memset(vis,0,sizeof(vis));
        memset(ans,0,sizeof(ans));
        scanf("%d %d",&n,&m);
        printf("Case %d:\n",++id);
        subset(0);
    }
    return 0;
}

