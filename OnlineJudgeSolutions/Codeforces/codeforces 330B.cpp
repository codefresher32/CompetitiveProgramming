#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a,b;
    cin>>n>>m;
    bool f[1005]={0};
    while(m--){
        cin>>a>>b;
        f[a]=f[b]=1;
    }
    int root;
    for(int i=1;i<=n;i++){
        if(!f[i]){
            root=i;
            break;
        }
    }
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++){
        if(i!=root){
           cout<<root<<" "<<i<<endl;
        }
    }
    return 0;
}
