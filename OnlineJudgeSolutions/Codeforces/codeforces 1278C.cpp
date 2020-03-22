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

int arl[100005],arr[100005];


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        map<int,int>l,r;
        int a,b,bbl,bbr,sbl,sbr;
        bbl=sbl=bbr=sbr=0;
        for(int i=n;i>=1;i--){
            cin>>arl[i];
            if(arl[i]==1) sbl++;
            else bbl++;
        }
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if(arr[i]==1) sbr++;
            else bbr++;
        }
        a=sbl,b=bbl;
        for(int i=1;i<=n+1;i++){
            if(!l[a-b]) l[a-b]=i;
            if(arl[i]==1) a--;
            else b--;
        }
        a=sbr,b=bbr;
        for(int i=1;i<=n+1;i++){
            if(!r[a-b]) r[a-b]=i;
            if(arr[i]==1) a--;
            else b--;
        }
        int mn=INT_MAX;
        a=sbl,b=bbl;
        for(int i=1;i<=n+1;i++){
            auto id=r.lower_bound(b-a);
            if(id!=r.end()&&id->F+a-b==0) mn=min(mn,i-1+id->S-1);
            if(arl[i]==1) a--;
            else b--;
        }
        a=sbr,b=bbr;
        for(int i=1;i<=n+1;i++){
            auto id=l.lower_bound(b-a);
            if(id!=l.end()&&id->F+a-b==0) mn=min(mn,i-1+id->S-1);
            if(arr[i]==1) a--;
            else b--;
        }
        cout<<mn<<endl;
    }
    return 0;
}

/*
3
2 2 1 1 1 1
*/
