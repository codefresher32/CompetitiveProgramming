#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[105];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i+=2){
        cout<<a[i]<<" ";
    }
    for(int i=((n&1)?n-1:n);i>=1;i-=2){
        cout<<a[i]<<" ";
    }
    return 0;
}


