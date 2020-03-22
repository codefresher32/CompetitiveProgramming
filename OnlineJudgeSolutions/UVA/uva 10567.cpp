#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

vector<int>G[256];

int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    string s,q;
    int t,id,a;
    cin>>s;
    for(int i=0;i<s.size();i++){
        G[s[i]].pb(i);
    }
    scanf("%d",&t);
    while(t--){
        cin>>q;
        id=-1,a=0;
        bool f=0;
        for(int i=0;i<q.size();i++){
            auto low=upper_bound(G[q[i]].begin(),G[q[i]].end(),id);
            id=low-G[q[i]].begin();
            if(low==G[q[i]].end()){
                f=1;
                break;
            }
            id=G[q[i]][id];
            if(i==0) a=id;
        }
        if(!f){
            printf("Matched %d %d\n",a,id);
        }
        else{
            printf("Not matched\n");
        }
    }
    return 0;
}

