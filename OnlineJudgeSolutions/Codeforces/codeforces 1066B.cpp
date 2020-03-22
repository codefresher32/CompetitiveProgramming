#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[10005]={0},r;
    cin>>n>>r;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int i=1,ni=0,cnt=0;
    while(i<=n){
       bool f=0;
       for(int j=max(1,i-r+1);j<=i+r-1;j++){
            if(a[j]==1){
                f=1;
                ni=j+r-1;
            }
       }
       if(!f){
            cout<<-1<<endl;
            return 0;
       }
       cnt++;
       i=ni+1;
    }
    cout<<cnt<<endl;
    return 0;
}
