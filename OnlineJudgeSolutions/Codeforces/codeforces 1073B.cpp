#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[200005]={0},x,p,y,tr;
    cin>>x;
    n=x;
    for(int i=0;i<n;i++){
        cin>>p;
        a[p]=i+1;
    }
    tr=0;
    while(x--){
        cin>>p;
        y=a[p];
        if(y>tr){
            cout<<abs(tr-y)<<" ";
        }
        else{
            cout<<0<<" ";
        }
        tr=max(tr,y);
    }
    cout<<endl;
    return 0;
}
