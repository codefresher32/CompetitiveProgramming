#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z,a,b,c,t;
    cin>>x>>y>>z>>a>>b>>c;
    a-=x;
    if(a<0){
        cout<<"NO\n";
        return 0;
    }
    t=b+a;
    t-=y;
    if(t<0){
        cout<<"NO\n";
        return 0;
    }
    t+=c;
    t-=z;
    if(t<0){
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";

    return 0;
}




