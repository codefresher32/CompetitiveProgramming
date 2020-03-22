#include<bits/stdc++.h>
using namespace std;

int n,s,value,ans,ret;
long long a[100005];
long long cp[100005];

bool ck(int x)
{
    for(int i=1;i<=n;i++){
       cp[i]=a[i]+i*x;
    }
    //sort(cp+1,cp+1+n);
    ret=0;
    for(int i=1;i<=n;i++){
        ret+=cp[i];
    }
    if(ret<=s){
        return true;
    }
    else{
        return false;
    }
}



void bs(int lo,int hi)
{
    int mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ck(mid)){
            lo=mid+1;
            ans=mid;
            value=ret;
        }
        else{
            hi=mid-1;
        }
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    bs(1,n);
    cout<<ans<<" "<<value<<endl;
    return 0;
}
