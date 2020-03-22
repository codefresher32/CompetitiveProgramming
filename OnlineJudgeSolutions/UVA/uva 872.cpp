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

map<char,int>mp;
bool f,vis[50];
vector<int>G[100];
int ind[50];
vector<char>vc,ans;


bool ck()
{
    int v,a[50]={0};
    for(int i=0;i<=30;i++){
        a[i]=ind[i];
    }
    for(auto ch:ans){
        v=mp[ch];
        if(a[v]){
            return false;
        }
        for(int s:G[v]){
            a[s]--;
        }
    }
    return true;
}


void subset()
{
    if(ans.size()==vc.size()){
        if(ck()){
            f=1;
            cout<<ans[0];
            for(int i=1;i<ans.size();i++){
                cout<<" "<<ans[i];
            }
            cout<<endl;
        }
        return ;
    }
    for(int i=0;i<vc.size();i++){
        if(!vis[i]){
            vis[i]=1;
            ans.pb(vc[i]);
            subset();
            vis[i]=0;
            ans.pp();
            while(i+1<vc.size()&&vc[i]==vc[i+1]){
                i++;
            }
        }
    }
}


void clr()
{
    f=0;
    for(int i=0;i<50;i++){
        vis[i]=ind[i]=0;
        G[i].clear();
    }
    vc.clear();
    ans.clear();
    mp.clear();
}

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    string s;
    int l,id,u,v,t;
    scanf("%d",&t);
    getchar();
    while(t--){
        getchar();
        getline(cin,s);
       id=0;
       l=s.size();
       for(int i=0;i<l;i+=2){
            if(!mp[s[i]]){
                mp[s[i]]=++id;
            }
            vc.pb(s[i]);
       }

       getline(cin,s);
       l=s.size();
       for(int i=0;i<l;i+=4){
           u=mp[s[i]];
           v=mp[s[i+2]];
           ind[v]++;
           G[u].pb(v);
       }
       sort(vc.begin(),vc.end());
       subset();
       if(!f){
            printf("NO\n");
       }
       if(t){
            printf("\n");
       }
       clr();
    }
    return 0;
}



