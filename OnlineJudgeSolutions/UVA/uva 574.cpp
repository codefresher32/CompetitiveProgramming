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

int sum,n,a[15];
bool f,vis[15];
vector<int>v;

void subset(int s,int id)
{
    if(s>sum){
        return ;
    }
    if(s==sum){
        f=1;
        cout<<v[0];
        for(int i=1;i<v.size();i++){
            printf("+%d",v[i]);
        }
        printf("\n");
        return ;
    }
    for(int i=id;i<=n;i++){
        if(!vis[i]){
            vis[i]=1;
            v.pb(a[i]);
            subset(s+a[i],i+1);
            vis[i]=0;
            v.pp();
            while(i+1<=n&&a[i]==a[i+1]){
                i++;
            }
        }
    }
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    while(scanf("%d %d",&sum,&n)!=EOF){
        if(!(n+sum)){
            return 0;
        }
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        printf("Sums of %d:\n",sum);
        subset(0,1);
        if(!f){
            printf("NONE\n");
        }
        f=0;
        memset(vis,0,sizeof(vis));
        v.clear();
    }

    return 0;
}


