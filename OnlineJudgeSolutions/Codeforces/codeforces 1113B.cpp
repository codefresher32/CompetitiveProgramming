#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isp(int n)
{
    if(n%2==0){
        return false;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[50005]={0},sum=0,m,x,y,z;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a+1,a+1+n);
    x=a[1];
    int mn=sum,mx=0;
    for(int i=n;i>=1;i--){
        if(!isp(a[i])){
            for(int j=2;j<=a[i]/2;j++){
               if(a[i]%j==0){
                  y=a[i]-a[i]/j;
                  z=x*j;
                  z-=x;
                  mx=max(mx,y-z);
               }
            }
        }
    }
    if(mx<0){
        mx=0;
    }
    cout<<sum-mx<<endl;
    return 0;
}

