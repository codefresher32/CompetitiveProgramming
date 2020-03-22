#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,a[150]={0},cnt[10005]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    sort(a+1,a+n+1);
    x=a[n];
    for(int i=1;i<=x;i++){
        if(x%i==0){
            cnt[i]--;
        }
    }
    for(int i=10000;i>=1;i--){
        if(cnt[i]==1){
            y=i;
            break;
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}




