#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,ll>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7

struct node
{
    int x,y,z;
    node(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    bool operator<(const node &p)const{
        return z>p.z;
    }
};
priority_queue<node>pq;
int parrent[5005];
int arr[505];

int FindParrent(int n)
{
    if(parrent[n]==n){
        return n;
    }
    return parrent[n]=FindParrent(parrent[n]);
}

int getD(int a,int b)
{
    int sum=0,x;
    for(int i=1;i<=4;i++){
        x=abs(a%10-b%10);
        sum+=min(x,10-x);
        a/=10,b/=10;
    }
    return sum;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,n,u,v,w,mn;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
            parrent[i]=i;
        }
        int sum=0;
        mn=INT_MAX;
        for(int i=1;i<=n;i++){
            mn=min(mn,getD(0,arr[i]));
        }
        sum+=mn;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                pq.push(node(i,j,getD(arr[i],arr[j])));
            }
        }
        while(!pq.empty()){
            node tp=pq.top();
            pq.pop();
            u=FindParrent(tp.x);
            v=FindParrent(tp.y);
            if(u!=v){
                sum+=tp.z;
                parrent[v]=u;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}


