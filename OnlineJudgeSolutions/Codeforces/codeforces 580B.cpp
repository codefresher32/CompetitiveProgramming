#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct pir
{
    int m,s;
}a[100005];

bool c(pir x,pir y)
{
    return x.s>y.s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>a[i].m>>a[i].s;
    }
    sort(a,a+n,c);
    ll sum,pr,x;
    sum=a[0].s;
    pr=a[0].m;
    for(int i=1;i<n;i++){
        x=pr-a[i].m;
        if(x<=d&&x>=0){
            sum+=a[i].s;
        }
    }
    cout<<sum<<endl;
    return 0;
}
