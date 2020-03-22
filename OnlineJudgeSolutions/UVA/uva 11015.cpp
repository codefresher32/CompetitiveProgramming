#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

map<int,string>mp;
int d[50][50];


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int u,v,n,m,id=0,w;
    string s;
    while(scanf("%d %d",&n,&m)!=EOF){
        if(!n&&!m){
            break;
        }
        for(int i=1;i<=n;i++){
            scanf("%s",s.c_str());
            mp[i]=s.c_str();
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d[i][j]=1e9;
                d[i][i]=0;
            }
        }
        for(int i=1;i<=m;i++){
            scanf("%d %d %d",&u,&v,&w);
            d[u][v]=d[v][u]=w;
        }
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
                }
            }
        }
        int root,mx,mn=INT_MAX;
        for(int i=1;i<=n;i++){
            mx=0;
            for(int j=1;j<=n;j++){
                if(i!=j){
                    mx+=d[i][j];
                }
            }
            if(mx<mn){
                root=i;
                mn=mx;
            }
        }
//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=n;j++){
//                cout<<d[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//        cout<<root<<endl;
        printf("Case #%d : %s\n",++id,mp[root].c_str());
        mp.clear();
    }

    return 0;
}

