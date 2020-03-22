#include<bits/stdc++.h>

using namespace std;

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pb_ds;

typedef long long ll;


#define pii pair<ll,ll>
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 1000000007
#define pai acos(-1)



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,l,r,u;
    cin>>n>>m;
    vector<pi>vc;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i+j==0) continue;
            if(!vc.size()) vc.pb({i,j});
            else{
                double x;
                bool f=0;
                for(pi v:vc){
                    x=(double)sqrt((v.F-i)*(v.F-i)+(v.S-j)*(v.S-j));
                    u=sqrt((v.F-i)*(v.F-i)+(v.S-j)*(v.S-j));
                    if(x-u==0) f=1;
                }
                if(!f) vc.pb({i,j});
            }
        }
    }
    cout<<vc.size()<<endl;
    for(auto v:vc){
        cout<<v.F<<" "<<v.S<<endl;
    }
    return 0;
}

