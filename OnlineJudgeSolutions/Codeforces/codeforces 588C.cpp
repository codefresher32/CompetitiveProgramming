#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int bit[1000020];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        bit[a]++;
    }
    int ans=0;
    for(int i=0;i<1000020;i++){
        bit[i+1]+=bit[i]/2;
        bit[i]%=2;
        ans+=bit[i];
    }
    cout<<ans<<endl;
    return 0;
}

