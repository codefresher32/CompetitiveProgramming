#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct e
{
    ll v,id;
}a[200005];

bool f(e A,e B)
{
    return A.v>B.v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll s=0;
    for(int i=1;i<=n;i++){
        cin>>a[i].v;
        a[i].id=i;
        s+=a[i].v;
    }
    sort(a+1,a+n+1,f);
    vector<int>ve;
    int x,y;
    for(int i=1;i<=n;i++){
        if(i==1){
           y=a[2].v;
        }
        else{
            y=a[1].v;
        }
        s-=a[i].v;
        if(y==(s-y)){
            ve.push_back(a[i].id);
        }
        s+=a[i].v;
    }
    cout<<ve.size()<<endl;
    for(int i=0;i<ve.size();i++){
        cout<<ve[i]<<" ";
    }

    return 0;
}
