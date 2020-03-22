 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[100005]={0},m,k;
    cin>>n>>m>>k;
    vector<int>v;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i>1){
            v.push_back(a[i]-a[i-1]);
        }
    }
    sort(v.begin(),v.end());
    ll sum=0;
    for(int i=0;i<n-k;i++){
        sum+=v[i];
    }
    cout<<sum+k<<endl;
    return 0;
}



