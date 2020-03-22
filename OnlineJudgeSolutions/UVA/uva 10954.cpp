#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct compare
 {
   bool operator()(const ll& l, const ll& r)
   {
       return l > r;
   }
 };


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,l,x,y,sum;
    while(cin>>n){
        sum=0;
        if(n==0){
            return 0;
        }
        priority_queue<ll,vector<ll>, compare > pq;
        for(int i=0;i<n;i++){
            cin>>x;
            pq.push(x);
        }
        while(pq.size()>1){
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            sum+=x+y;
            pq.push(x+y);
        }
        cout<<sum<<endl;
    }
    return 0;
}
