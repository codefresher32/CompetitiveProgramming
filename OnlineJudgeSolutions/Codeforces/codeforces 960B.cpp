#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k1,k2,k;
    long long a[1005]={0},b[1003]={0};
    priority_queue<long long>pq;
    cin>>n>>k1>>k2;
    k=k1+k2;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    for(int i=1;i<=n;i++){
        pq.push(abs(a[i]-b[i]));
    }
    long long x;
    while(k--){
        x=pq.top();
        pq.pop();
        pq.push(abs(x-1));
    }
    long long ans=0;
    while(!pq.empty()){
        ans+=pq.top()*pq.top();
        pq.pop();
    }
    cout<<ans<<endl;
    return 0;
}

