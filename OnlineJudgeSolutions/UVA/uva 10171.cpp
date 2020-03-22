#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int d1[105][105],d2[105][105];
map<char,int>mp;
map<int,char>pm;

void F_W(int n)
{
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d1[i][j]=min(d1[i][j],d1[i][k]+d1[k][j]);
            }
        }
    }

//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            printf("%d  ",d1[i][j]);
//        }
//        printf("\n");
//    }

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d2[i][j]=min(d2[i][j],d2[i][k]+d2[k][j]);
            }
        }
    }

//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            printf("%d  ",d2[i][j]);
//        }
//        printf("\n");
//    }

    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,u,v,w,id=0;
    char c1,c2,c3,c4;
    while(scanf("%d",&n)){
        id=0;
        if(!n){
            return 0;
        }
        for(int i=1;i<=n*2;i++){
            for(int j=1;j<=n*2;j++){
                if(i==j){
                   d1[i][j]=d2[i][j]=0;
                }
                else{
                   d1[i][j]=d2[i][j]=1e8;
                }
            }
        }
        for(int i=1;i<=n;i++){
            cin>>c1>>c2>>c3>>c4>>w;
            if(!mp[c3]){
                mp[c3]=++id;
                pm[id]=c3;
            }
            if(!mp[c4]){
                mp[c4]=++id;
                pm[id]=c4;
            }
            if(mp[c3]==mp[c4]){
                continue;
            }
            if(c1=='Y'){
                if(c2=='U'){
                    d1[mp[c3]][mp[c4]]=w;
                }
                else{
                    d1[mp[c3]][mp[c4]]=d1[mp[c4]][mp[c3]]=w;
                }
            }
            else{
                if(c2=='U'){
                    d2[mp[c3]][mp[c4]]=w;
                }
                else{
                    d2[mp[c3]][mp[c4]]=d2[mp[c4]][mp[c3]]=w;
                }
            }
        }
        cin>>c1>>c2;
        F_W(id);
        int ans=INT_MAX;
        vector<char>vc;
        for(int i=1;i<=id;i++){
            if(ans>=d1[mp[c1]][i]+d2[mp[c2]][i]){
                if(ans==d1[mp[c1]][i]+d2[mp[c2]][i]){
                    vc.pb(pm[i]);
                }
                else{
                    vc.clear();
                    vc.pb(pm[i]);
                }
                ans=d1[mp[c1]][i]+d2[mp[c2]][i];
            }
        }
        sort(vc.begin(),vc.end());
        if(ans>=1e8||!mp[c1]||!mp[c2]){
            printf("You will never meet.");
        }
        else{
            printf("%d",ans);
            for(char ch:vc){
                printf(" %c",ch);
            }
        }
        printf("\n");
        mp.clear();
        pm.clear();
    }

    return 0;
}
