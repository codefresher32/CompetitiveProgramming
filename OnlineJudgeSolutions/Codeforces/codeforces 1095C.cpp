#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    vector<int>v;
    cin>>n>>k;
    int x=1,y=n;
    while(y>0){
        if(y&1){
            v.push_back(x);
        }
        y/=2;
        x*=2;
    }
    //for(int i=0;i<v.size();i++){
        //cout<<v[i]<<" ";
    //}
    //cout<<endl;
    if(v.size()<=k&&k<=n){
        for(int i=0;i<v.size()&&v.size()<k;i++){
            while(v[i]>1&&v.size()<k){
                v[i]/=2;
                v.push_back(v[i]);
            }
        }
        sort(v.begin(),v.end());
        cout<<"YES\n";
        for(auto p:v){
            cout<<p<<" ";
        }
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
