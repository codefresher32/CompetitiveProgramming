#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d,mx=0,ans=0,cnt;
    char x[105][105];
    cin>>n>>d;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=n;j++){
            cin>>x[i][j];
        }
    }
    for(int i=1;i<=d;i++){
        cnt=0;
        for(int j=1;j<=n;j++){
            if(x[i][j]=='1'){
                cnt++;
            }
        }
        if(cnt!=n){
            ans++;
        }
        else{
            ans=0;
        }
        mx=max(ans,mx);
    }
    cout<<mx<<endl;
    return 0;
}


