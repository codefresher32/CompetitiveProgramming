#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[100005]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int p=0,i=1,x;
    vector<int>v;
    for(int i=1;;i++){
        if(i>n){
            i=n;
        }
        if(a[i]==p&&i!=n){
            continue;
        }
        else{
            x=a[i]-p;
            x=x<0?0:x;
            v.push_back(x);
        }
        if(v.size()==k){
            break;
        }
        p=a[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
