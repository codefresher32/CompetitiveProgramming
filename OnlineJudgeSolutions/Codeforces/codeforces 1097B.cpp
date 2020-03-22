#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,a[20],sum;
int f=0;

void ck(int i,int v)
{
    int p1=0,p2=0;
    if(i>n){
        if((2*v)%360==sum){
            f=1;
        }
        return ;
    }
    ck(i+1,v+a[i]);
    ck(i+1,v);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%360==0){
        cout<<"YES\n";
        return 0;
    }
    if(sum%2!=0){
        cout<<"NO\n";
         return 0;
    }
    sum%=360;
    ck(1,0);
    if(f==1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}

