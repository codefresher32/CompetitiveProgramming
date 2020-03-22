#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


bool com(pii A,pii B)
{
    return A.S>B.S;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,t,b;
    vector<pii>v;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>t>>b;
        v.pb({t,b});
    }
    sort(v.begin(),v.end(),com);
    multiset<int>st;

    ll sum=0,mx=0;

    for(int i=0;i<n;i++){
        st.insert(v[i].F);
        sum+=v[i].F;
        if(st.size()>k){
           auto it=st.begin();
           sum-=*it;
           st.erase(it);
        }
        mx=max(mx,1ll*sum*v[i].S);
    }
    cout<<mx<<endl;
    return 0;
}
