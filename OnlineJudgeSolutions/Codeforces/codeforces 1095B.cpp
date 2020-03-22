#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,a[100005];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<min(a[n-1]-a[1],a[n-2]-a[0]);
    return 0;
}

