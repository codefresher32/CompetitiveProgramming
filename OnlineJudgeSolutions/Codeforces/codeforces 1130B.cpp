#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>

bool com(pii A,pii B)
{
    if(A.first==B.first){
        return A.second<B.second;
    }
    return A.first<B.first;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    vector<pii>v;
    cin>>n;
    for(int i=1;i<=n*2;i++){
        cin>>a;
        v.push_back({a,i});
    }
    ll ans=0;
    sort(v.begin(),v.end(),com);
    int in=1;
    for(int i=0;i<v.size();i+=2){
        ans+=abs(v[i].second-in);
        in=v[i].second;
    }
    in=1;
    for(int i=1;i<v.size();i+=2){
        ans+=abs(v[i].second-in);
        in=v[i].second;
    }
    cout<<ans<<endl;
    return 0;
}

