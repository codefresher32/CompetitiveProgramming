#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int n,a[105]={0},b[105]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=2;i<=n;i++){
        b[i]=a[i]-a[i-1];
    }
    int cnt=0,mx=-1;
    for(int i=1;i<n-1;i++){
        if(b[i]==b[i+1]){
            cnt++;
        }
        else{
            cnt=0;
        }
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;
    return 0;
}
