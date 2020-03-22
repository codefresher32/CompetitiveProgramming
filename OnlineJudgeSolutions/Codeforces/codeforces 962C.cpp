
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

deque<int>dq;
vector<int>v,a;
int mx=INT_MAX,n,m;

void rr(int i)
{
    int x,y;
    if(i==n){
        x=0;
        bool f=0;
        int c=0;
        for(int i=0;i<dq.size();i++){
            if(dq[i]>0){
                f=1;
            }
            if(!f){
                c++;
            }
            x=x*10+dq[i];
        }
        y=sqrt(x);
        if(y*y==x){
            x=dq.size()-c;
            if(x!=0){
                mx=min(n-x,mx);
            }
        }
        return ;
    }
    dq.push_back(a[i]);
    rr(i+1);
    dq.pop_back();
    rr(i+1);
}



int main()
{
    int t,x,y;
    cin>>n;
    while(n){
        a.pb(n%10);
        n/=10;
    }
    n=a.size();
    reverse(a.begin(),a.end());
    rr(0);
    if(mx==INT_MAX){
        cout<<-1<<endl;
    }
    else{
       cout<<mx<<endl;
    }
    return 0;
}
