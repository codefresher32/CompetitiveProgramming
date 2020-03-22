#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>vv;
    int n,v,x,y,i,k,j=1;
    cin>>n>>v;
    bool f;
    while(n--){
        cin>>k;
        f=0;
        for(i=1;i<=k;i++){
            cin>>x;
            if(x<v){
                f=1;
            }
        }
        if(f){
            vv.push_back(j);
        }
        j++;
    }
    cout<<vv.size()<<endl;
    for(int xx:vv){
        cout<<xx<<" ";
    }
    cout<<endl;
    return 0;
}

