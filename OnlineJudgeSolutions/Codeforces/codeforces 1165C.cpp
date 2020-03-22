#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
//#define pb push_back
#define pp pop_back

set<ll>divi;

void Divisors(ll n)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
               divi.insert(i);

            else{
               divi.insert(i);
               divi.insert(n/i);
            }

        }
    }
}



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t,x,gc,lc,y;
    cin>>t;
    while(t--){
        set<ll>v;
        cin>>n;
        cin>>x;
        lc=x;
        v.insert(x);
        int mx=x;
        for(int i=1;i<n;i++){
            cin>>y;
            lc=(lc*y)/__gcd(lc,y);
            v.insert(y);
            mx=max(mx,(int)y);
        }
        if(lc==mx){
            lc*=2;
        }
        v.insert(lc);
        v.insert(1);
        Divisors(lc);
//        for(auto xx:divi){
//            cout<<xx<<" ";
//        }
//        cout<<endl;
        if(divi==v){
            cout<<lc<<endl;
        }
        else if(n==1){
            ll o,p;
            o=x*x;
            p=sqrt(o);
            if(p==x){
                cout<<o<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
        divi.clear();
    }

    return 0;
}

/*

*/
