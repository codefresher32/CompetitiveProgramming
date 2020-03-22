#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

vector<int>vc[10005];
map<string,int>mp;


int main()
{
    int n,m;
    string s,o=",",p;
    while(scanf("%d %d",&n,&m)!=EOF){
        bool f=0;
        int id=0;
        getchar();
        for(int i=1;i<=n;i++){
            getline(cin,s);
            for(int j=1;j<m;j++){
                size_t f=s.find(o);
                p=s.substr(0,f);
                s=s.substr(f+1);
                if(!mp[p]) mp[p]=++id;
                vc[i].pb(mp[p]);
                if(j+1==m){
                    if(!mp[s]) mp[s]=++id;
                    vc[i].pb(mp[s]);
                }
            }
        }
        int r1,r2,c1,c2;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                c1=c2=-1;
                for(int k=0;k<m;k++){
                    if(vc[i][k]==vc[j][k]){
                        if(c1==-1)  c1=k+1;
                        else if(c2==-1) c2=k+1;
                        else break;
                    }
                }
                if(c1!=-1&&c2!=-1){
                    f=1,r1=i,r2=j;
                    break;
                }
            }
            if(f) break;
        }
        if(f){
            printf("NO\n%d %d\n%d %d\n",min(r1,r2),max(r1,r2),min(c1,c2),max(c1,c2));
        }
        else{
            printf("YES\n");
        }
        for(int i=1;i<=n;i++) vc[i].clear();
    }

    return 0;
}



