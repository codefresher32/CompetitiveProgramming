#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int d[55][55];
map<string,int>mp;


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,id,tc=0;
    string s1,s2;
    while(scanf("%d %d",&n,&m)!=EOF){
        id=0;
        if(n==0&&m==0){
            return 0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d[i][j]=1e9;
            }
        }
        mp.clear();
        for(int i=1;i<=m;i++){
            cin>>s1>>s2;
            if(!mp[s1]){
                mp[s1]=++id;
            }
            if(!mp[s2]){
                mp[s2]=++id;
            }
            d[mp[s1]][mp[s2]]=d[mp[s2]][mp[s1]]=1;
        }
        int mx=-1;
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                mx=max(d[i][j],mx);
            }
        }
        printf("Network %d: ",++tc);
        if(mx<1e9){
            printf("%d\n\n",mx);
        }
        else{
            printf("DISCONNECTED\n\n");
        }
    }
    return 0;
}

