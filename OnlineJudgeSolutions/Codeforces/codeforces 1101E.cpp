#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h,w,x,y,mx=0,my=0;
    char c;
    cin>>n;
    while(n--){
        cin>>c>>x>>y;
        if(x>y){
            swap(x,y);
        }
        if(c=='+'){
            mx=max(x,mx);
            my=max(y,my);
        }
        else{
            if(mx>x||my>y){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    }
    return 0;
}


