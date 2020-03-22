#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x,y,wd,bd;
    cin>>n>>x>>y;
    if(x==y){
        wd=x-1;
        bd=n-x;
    }
    else if(x<y){
        wd=x-1+y-x;
        bd=n-y+y-x;
    }
    else{
        wd=y-1+x-y;
        bd=n-x+x-y;
    }
    //cout<<wd<<endl<<bd<<endl;
    if(wd<=bd){
        cout<<"White\n";
    }
    else{
        cout<<"Black\n";
    }
    return 0;
}

