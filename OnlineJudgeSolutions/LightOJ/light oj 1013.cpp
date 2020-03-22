#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<ll,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define eps 10E-10
#define mod 4294967296
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))
#define M 5761600

int l1,l2;
string s1,s2;
ll len,dp1[35][35],dp2[35][35][65];


ll lcs(int i,int j)
{
    if(i>=l1||j>=l2) return 0;
    ll &ret=dp1[i][j];
    if(ret!=-1) return ret;
    ll p=0;
    if(s1[i]==s2[j]) p=1+lcs(i+1,j+1);
    else p=max(lcs(i+1,j),lcs(i,j+1));
    return ret=p;
}

ll substring(int i,int j,int l)
{
    if(i>=l1){
        l+=l2-j;
        return l==len;
    }
    if(j>=l2){
        l+=l1-i;
        return l==len;
    }
    ll &ret=dp2[i][j][l];
    if(ret!=-1) return ret;
    ll p=0;
    if(s1[i]==s2[j]) p=substring(i+1,j+1,l+1);
    else p+=(substring(i+1,j,l+1)+substring(i,j+1,l+1));
    return ret=p;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,id=0;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        l1=s1.size(),l2=s2.size();
        memset(dp1,-1,sizeof dp1);
        memset(dp2,-1,sizeof dp2);
        len=l1+l2-lcs(0,0);
        ll ans=substring(0,0,0);
        cout<<"Case "<<++id<<": "<<len<<" "<<ans<<endl;
    }
    return 0;
}


