#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back

int a[25];
deque<int>dq;
vector<int>v;
int mx,n,m;

void dp(int i,int sum)
{
    if(i==n){
        if(mx<sum&&sum<=m){
            mx=sum;
            v.clear();
            for(int x:dq){
                v.pb(x);
            }
        }
        return ;
    }
    dq.push_back(a[i]);
    dp(i+1,sum+a[i]);
    dq.pop_back();
    dp(i+1,sum);
}



int main()
{
    int t,x,y;
    while(scanf("%d%d",&m,&n)!=EOF){
       for(int i=0;i<n;i++){
           scanf("%d",&a[i]);
       }
       dp(0,0);
       for(int q:v){
            printf("%d ",q);
       }
       printf("sum:%d\n",mx);
       mx=0;
    }
    return 0;
}

