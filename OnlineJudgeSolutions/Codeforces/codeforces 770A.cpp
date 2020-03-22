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
    int n,m;
    cin>>n>>m;
    string s="a",ans="";
    for(int i=1;i<26;i++) s+=('a'+i);
    for(int i=0;i<n;i++) ans+=s[i%m];
    cout<<ans<<endl;
    return 0;
}

