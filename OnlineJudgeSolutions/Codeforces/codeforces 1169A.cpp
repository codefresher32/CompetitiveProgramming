#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,x,y;
    cin>>n>>a>>x>>b>>y;
    for(int i=1;i<=100;i++){
        a++;
        b--;
        if(a>n){
            a=1;
        }
        if(b<1){
            b=n;
        }
        if(a==b){
            cout<<"YES\n";
            return 0;
        }
        if(a==x||b==y){
            break;
        }
    }
    cout<<"NO\n";

    return 0;
}

