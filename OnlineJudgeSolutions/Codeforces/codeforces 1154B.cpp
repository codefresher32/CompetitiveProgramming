#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,x=-1;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    if(v.size()==3){
        if(v[2]-v[1]==v[1]-v[0]){
            x=v[2]-v[1];
        }
    }
    else if(v.size()==2){
        if((v[1]-v[0])&1){
            x=v[1]-v[0];
        }
        else{
            x=(v[1]-v[0])/2;
        }
    }
    else if(v.size()==1){
        x=0;
    }
    cout<<x<<endl;
    return 0;
}


