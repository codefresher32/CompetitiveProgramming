#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[105]={0};
    cin>>n;
    int co=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<n;i+=2){
        if(a[i]==a[i+1]){
            continue;
        }
        co+=(a[i+1]-a[i]);
    }
    cout<<co<<endl;
    return 0;
}

