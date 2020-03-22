#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,v,ans=0,m,i=1,cap=0,x;
    cin>>n>>v;
    m=n-1;
    if(m<=v){
       ans+=m;
        m-=m;
    }
    else{
        ans+=v;
        m-=v;
    }
    if(m){
        for(int i=2,j=1;j<=m;i++,j++){
            ans+=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}

