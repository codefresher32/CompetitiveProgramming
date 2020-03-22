#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cnt=0,i,mn=INT_MAX;

    string s,ans,t,r,p[6]={"BRG","BGR","RGB","RBG","GRB","GBR"};
    cin>>n>>s;
    i=0;
    do{
        r=s;
        cnt=0;
        t="";
       for(int j=0,K=0;j<n;j++){
            if(r[j]!=p[i][K]){
               cnt++;
            }
            t+=p[i][K];
            K=(K+1>=3)?0:K+1;
       }
       if(cnt<mn){
            mn=cnt;
            ans=t;
       }
       i++;
    }
    while(i<6);
    cout<<mn<<endl<<ans<<endl;
    return 0;
}
