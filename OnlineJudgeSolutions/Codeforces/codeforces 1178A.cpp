#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pii>vc;
    int al,a,n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        s+=a;
        if(i==1) al=a;
        vc.pb({a,i});
    }
    sort(vc.begin(),vc.end());
    int sum=al;
    bool f=0;;
    vector<int>v;
    for(pii tp:vc){
       if(tp.S!=1){
            if(al>=2*tp.F){
                sum+=tp.F;
                v.pb(tp.S);
            }
       }
    }
    if(2*sum<=s){
        cout<<0<<endl;

    }
    else{
         v.pb(1);
        cout<<v.size()<<endl;
        for(int vv:v){
            cout<<vv<<" ";
        }
    }
    return 0;
}

