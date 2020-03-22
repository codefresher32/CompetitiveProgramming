#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c,s[200005];
    int n,a,ar[200005]={0},lr=0,rr=0;
    cin>>n;
    int pos,ans,p1=0,p2=0;
    cin>>c>>a;
    pos=a;
    for(int i=2;i<=n;i++){
        cin>>c>>a;
        if(c=='L'){
            lr++;
            ar[a]=lr;
            s[a]='L';
        }
        else if(c=='R'){
            rr++;
            ar[a]=rr;
            s[a]='R';
        }
        else{
            if(pos==a){
                p1=lr;
                p2=rr;
            }
           else if(s[a]=='R'){
              p1=rr-ar[a];
              p2=lr+ar[a];
           }
           else{
              p1=lr-ar[a];
              p2=rr+ar[a];
           }
           cout<<min(p1,p2)<<endl;
        }
    }
    return 0;
}
