#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a[105]={0},sum=0,m,mx=INT_MAX;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int ans=0;
    for(int m=1;m<=n;m++){
        sum=0;
       for(int i=1;i<=n;i++){
        ans=abs(i-m)*2;
        ans+=abs(i-1)*2;
        ans+=abs(1-m)*2;
        sum+=ans*a[i];
    }
    mx=min(sum,mx);
    }
    mx=min(sum,mx);
    cout<<mx<<endl;
    return 0;
}
