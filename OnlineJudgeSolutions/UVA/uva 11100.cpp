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

int a[10005];
vector<int>v[10005];

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(scanf("%d",&n),n){
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            mp[a[i]]++;
            v[i].clear();
        }
        sort(a+1,a+1+n);
        int mx=0,id;
        for(auto u:mp){
            if(u.S>mx){
                mx=u.S;
                id=u.F;
            }
        }
        for(int i=1,j=1;i<=n;i++){
            if(a[i]!=id){
                v[j].pb(a[i]);
                j=(j+1>mx)?1:j+1;
            }
        }
        printf("%d\n",mx);
        for(int i=1;i<=mx;i++){
            printf("%d",id);
            for(int j=0;j<v[i].size();j++){
                printf(" %d",v[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

