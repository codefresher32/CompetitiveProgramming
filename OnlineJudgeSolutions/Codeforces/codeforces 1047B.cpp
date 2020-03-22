#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,x,y,mx=INT_MIN;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        mx=max(mx,x+y);
    }
    cout<<mx<<endl;
    return 0;
}

