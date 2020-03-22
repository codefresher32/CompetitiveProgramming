#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k,x;
    cin>>n>>m>>k;
    vector<int>a,b,v;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
        b.push_back(x);
    }
    std::vector<int>::iterator u1, upper2;
    sort(b.begin(),b.end());
    int cnt=0;
    ll sum=0,y=(ll)m*k;
    y=n-y;
    int c=0;
    for(int i=0;i<n;i++){
       x=upper_bound(b.begin(),b.end(),a[i])-b.begin()-1;
       if(x>=y){
          sum+=a[i];
          b.erase(b.begin()+x);
          cnt++;
       }
       if(cnt==m){
            if(k>1){
                v.push_back(i+1);
            }
            k--;
            cnt=0;
       }
    }
    cout<<sum<<endl;
    for(int xx:v){
        cout<<xx<<" ";
    }
    return 0;
}




