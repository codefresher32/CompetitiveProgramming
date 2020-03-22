#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
bool r[100005],c[100005];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,cnt,m,x,y,cr=0,cc=0;
    cin>>n>>m;
    while(m--){
        cin>>x>>y;
        if(!r[x]){
           cr++;
           r[x]=1;
        }
        if(!c[y]){
            cc++;
            c[y]=1;
        }
        cnt=n*n-(n*cr+n*cc)+(cc*cr);
        cout<<cnt<<" ";
    }
    return 0;
}



