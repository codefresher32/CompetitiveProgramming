#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[2005]={0},m=1e5+10;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=m;
    }
    cout<<n+1<<endl;
    cout<<1<<" "<<n<<" "<<m<<endl;
    for(int i=1;i<=n;i++){
        cout<<2<<" "<<i<<" "<<a[i]-i+1<<endl;
    }
    return 0;
}

