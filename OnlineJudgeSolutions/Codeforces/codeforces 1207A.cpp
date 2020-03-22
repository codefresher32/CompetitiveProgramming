#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,b,p,f,h,c;
    cin>>t;
    while(t--){
        cin>>b>>p>>f>>h>>c;
        int s=0,x,y,aa,bb;
        x=b/2;
        if(h>=c){
            aa=min(x,p);
            bb=min(x-aa,f);
            s+=aa*h+bb*c;
        }
        else{
            aa=min(x,f);
            bb=min(x-aa,p);
            s+=aa*c+bb*h;
        }
        cout<<s<<endl;
    }
    return 0;
}


