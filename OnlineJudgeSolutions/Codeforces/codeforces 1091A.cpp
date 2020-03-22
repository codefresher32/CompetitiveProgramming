#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y,b,r,xb,yr;
    cin>>y>>b>>r;
    int mx=-1;
    for(int i=1;i<=y;i++){
       xb=i+1;
       yr=xb+1;
       if(xb>b||yr>r){
         break;
       }
       if(i+xb+yr>mx){
            mx=i+xb+yr;
       }
    }
    cout<<mx<<endl;
    return 0;
}
