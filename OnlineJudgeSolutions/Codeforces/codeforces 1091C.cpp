#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isp(ll n)
{
    if(n%2==0){
        return false;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<ll>st;
    ll n,x,y,a,b,s,gp;
    cin>>n;
    if(isp(n)){
        cout<<1<<" "<<n*(n+1)/2<<endl;
    }
    else{
        for(ll i=1;i*i<=n;i++){
            if(n%i==0){
                gp=n/i;
                s=gp*(2+(gp-1)*i);
                s/=2;
                st.insert(s);
                if(n/i!=i){
                    b=n/i;
                    gp=n/b;
                    s=gp*(2+(gp-1)*b);
                    s/=2;
                    st.insert(s);
                }
            }
        }
        for(auto x:st){
            cout<<x<<" ";
        }
    }
    return 0;
}

