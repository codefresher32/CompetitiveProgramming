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
map<int,int>po;
vector<int>G[50];


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int l,u,v,id;
    string o;
    char s[505];
    for(int i=0;i<26;i++){
        mp['A'+i]=i+1;
    }
    while(gets(s)){
        if(s[0]=='#') return 0;
        l=strlen(s),o="";
        for(int i=0;i<l;){
            u=mp[s[i]],o+=s[i],i+=2;
            while(i<l&&s[i]!=';'){
                v=mp[s[i]],o+=s[i];
                G[u].pb(v);
                i++;
            }
            i++;
        }
        sort(o.begin(),o.end());
        o.erase(unique(o.begin(),o.end()),o.end());
        l=o.size();
        int mx,mn=INT_MAX;
        string ans="";
        do{
           for(int i=0;i<l;i++) po[mp[o[i]]]=i+1;
           mx=0;
           for(int i=1;i<=26;i++){
                for(int x:G[i]){
                    mx=max(mx,abs(po[i]-po[x]));
                }
           }
           if(mx<mn){
                mn=mx,ans=o;
           }
        }
        while(next_permutation(o.begin(),o.end()));
        for(int i=0;i<l;i++){
            printf("%c ",ans[i]);
        }
        printf("-> %d\n",mn);
        for(int i=1;i<=30;i++){
            G[i].clear();
        }
    }
    return 0;
}


