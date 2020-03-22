#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    vector<int>A,C,T,G;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        A.pb(min(abs(s[i]-'A'),(26-abs(s[i]-'A'))));
        C.pb(min(abs(s[i]-'C'),(26-abs(s[i]-'C'))));
        T.pb(min(abs(s[i]-'T'),(26-abs(s[i]-'T'))));
        G.pb(min(abs(s[i]-'G'),(26-abs(s[i]-'G'))));
        //cout<<A[i]<<" "<<C[i]<<" "<<T[i]<<" "<<G[i]<<endl;
    }
    int ans=INT_MAX,mn;
    for(int i=0;i<=n-4;i++){
        mn=A[i]+C[i+1]+T[i+2]+G[i+3];
        ans=min(ans,mn);
    }
    cout<<ans<<endl;
    return 0;
}


