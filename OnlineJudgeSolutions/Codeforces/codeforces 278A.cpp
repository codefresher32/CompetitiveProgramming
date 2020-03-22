#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,u,v,x,y;
    cin>>n;
    int a[105]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cin>>u>>v;
    if(u>v){
        swap(u,v);
    }
    int m1=0,m2=0;
    for(int i=u;i<v;i++){
        m1+=a[i];
    }
    for(int i=1;i<=n;i++){
        if(i<u||i>=v){
            m2+=a[i];
        }
    }
    if(u==v){
        cout<<0<<endl;
    }
    else{
        cout<<min(m1,m2)<<endl;
    }
    return 0;
}

