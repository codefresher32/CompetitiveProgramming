#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    ll l,r,s1,s2,ans,t,e,o,fe,fo;
    cin>>q;
    while(q--){
        e=o=0;
        cin>>l>>r;
        t=r-l+1;
        if((t&1)){
            if(l&1){
                o++;
            }
            else{
                e++;
            }
        }
        if(l&1){
            fo=l;
            fe=l+1;
        }
        else{
            fe=l;
            fo=l+1;
        }
        e+=t/2;
        o+=t/2;
        e=e*(fe+e-1);
        o=o*(fo+o-1);
        cout<<e-o<<endl;
    }
    return 0;
}

