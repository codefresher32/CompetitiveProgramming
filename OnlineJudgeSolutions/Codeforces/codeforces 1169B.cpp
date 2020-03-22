#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,l,r;
    cin>>n>>m;
    vector<pii>vc;
    for(int i=1;i<=m;i++){
        cin>>l>>r;
        vc.pb({l,r});

    }
    vector<int>va;
    va.pb(vc[0].F);
    va.pb(vc[0].S);
    for(int x:va){
        vector<pii>v;
        for(int i=0;i<m;i++){
            if(x!=vc[i].F&&x!=vc[i].S){
                v.pb({vc[i].F,vc[i].S});
            }
        }
        if(!v.size()){
            cout<<"YES\n";
            return 0;
        }
        vector<int>vb;
        vb.pb(v[0].F);
        vb.pb(v[0].S);
        for(int y:vb){
            vector<pii>vx;
            for(int i=0;i<v.size();i++){
                if(y!=v[i].F&&y!=v[i].S){
                    vx.pb({v[i].F,v[i].S});
                }
            }
            if(!vx.size()){
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";

    return 0;
}
