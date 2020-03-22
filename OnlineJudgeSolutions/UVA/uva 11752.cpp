#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007
#define eps 1e-6
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64]|=(1<<((x%64)/2))

int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61};
bool vis[64];
ll lim=(2<<64)-1;


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    for(int i=0;i<18;i++) vis[prime[i]]=1;
    set<ll>st;
    st.insert(1);
    ll lm,n;
    int pw;
    //cout<<lim<<endl;
    for(ll i=2; ;i++){
        n=lim,pw=-1;
        lm=i;
        while(n){
            pw++,n/=lm;
        }
        if(pw<4){
            break;
        }
        for(ll j=2;j<=pw;j++){
            lm*=i;
            if(lm>lim){
                break;
            }
            if(!vis[j]){
                st.insert(lm);
            }
        }
    }
    for(auto x:st){
        cout<<x<<"\n";
    }
    return 0;
}
