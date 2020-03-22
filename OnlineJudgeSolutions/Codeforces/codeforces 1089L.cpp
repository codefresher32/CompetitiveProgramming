#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,a[100005],x,t=0;
    bool f[100005]={0};
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        f[a[i]]=1;
    }
    for(int i=1;i<=k;i++){
        if(!f[i]){
            t++;
        }
    }
    vector<int>v[100005];

    for(int i=1;i<=n;i++){
        cin>>x;
        v[a[i]].push_back(x);
    }
    vector<int>b;
    for(int i=1;i<=k;i++){
        sort(v[i].begin(),v[i].end());
        if(v[i].size()>1){
            for(int j=0;j<v[i].size()-1;j++){
                b.push_back(v[i][j]);
            }
        }
    }
    ll sum=0;
    sort(b.begin(),b.end());

    for(int i=0;i<t&&i<b.size();i++){
        sum+=b[i];
    }
    cout<<sum<<endl;

    return 0;
}


