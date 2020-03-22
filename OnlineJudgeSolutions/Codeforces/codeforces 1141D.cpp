#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

bool vis1[150005],vis2[150005];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    string s1,s2;
    cin>>n>>s1>>s2;
    vector<int>v1[30],v2[30];
    vector<pii>pi;
    for(int i=0;i<n;i++){
        if(s1[i]=='?'){
            v1[0].pb(i+1);
        }
        else{
            v1[s1[i]-'a'+1].pb(i+1);
        }
        if(s2[i]=='?'){
            v2[0].pb(i+1);
        }
        else{
            v2[s2[i]-'a'+1].pb(i+1);
        }
    }
    for(int i=1;i<=26;i++){
        for(int j=0;j<min(v1[i].size(),v2[i].size());j++){
            x=v1[i][j];
            y=v2[i][j];
            if(!vis1[x]&&!vis2[y]){
                pi.pb({x,y});
                vis1[x]=vis2[y]=1;
            }
        }
    }
    int l1,l2,k1=0,k2=0;
    l1=v1[0].size();
    l2=v2[0].size();
    for(int i=1;i<=26;i++){
        for(int j=0;j<v2[i].size()&&l1;j++){
            y=v2[i][j];
            if(!vis2[y]&&l1){
                x=v1[0][k1];
                if(!vis1[x]){
                    pi.pb({x,y});
                    vis1[x]=vis2[y]=1;
                    l1--;
                    k1++;
                }
            }
        }
    }
    for(int i=1;i<=26;i++){
        for(int j=0;j<v1[i].size()&&l2;j++){
            x=v1[i][j];
            if(!vis1[x]&&l2){
                y=v2[0][k2];
                if(!vis2[y]){
                    pi.pb({x,y});
                    vis1[x]=vis2[y]=1;
                    l2--;
                    k2++;
                }
            }
        }
    }
    for(int i=k1,j=k2;i<v1[0].size()&&j<v2[0].size();i++,j++){
        pi.pb({v1[0][i],v2[0][j]});
    }

    cout<<pi.size()<<endl;
    for(pii p:pi){
        cout<<p.F<<" "<<p.S<<endl;
    }

    return 0;
}

