#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[105]={0},mx=0,sm=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sm+=a[i];
        mx=max(mx,a[i]);
    }
    for(int i=mx;i<=1000;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            cnt+=(i-a[i]);
        }
        if(cnt>sm){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
