#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)
//#define mx 400000

int ar[20005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,id=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<n;i++) scanf("%d",&ar[i]);
        int dl=1,l=0,r=0,mx=-INT_MAX,sm=0;
        for(int i=1;i<n;i++){
            sm+=ar[i];
            if(sm<0) sm=0,dl=i+1;
            else if(sm>=mx){
                if(sm==mx&&i-dl>(r-l)) l=dl,r=i;
                else if(sm>mx) mx=sm,l=dl,r=i;
            }
        }
        if(mx>=0) printf("The nicest part of route %d is between stops %d and %d\n",++id,l,r+1);
        else printf("Route %d has no nice parts\n",++id);
    }
    return 0;
}


