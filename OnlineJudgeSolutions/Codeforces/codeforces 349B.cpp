#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v,a[10]={0},s=0;
    cin>>v;
    for(int i=1;i<=9;i++){
        cin>>a[i];
        s+=a[i];
    }
    int mx=0,d,num;
    for(int i=1;i<=9;i++){
       d=v/a[i];
       if(d>=mx){
          mx=d;
          num=i;
       }
    }
    for(int i=9;i>0;i--){
        d=
    }

    if(mx==0){
        cout<<-1<<endl;
    }
    else{
        for(int i=0;i<mx;i++){
            cout<<num;
        }
    }
    return 0;
}

